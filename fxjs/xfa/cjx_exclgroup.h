// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef FXJS_XFA_CJX_EXCLGROUP_H_
#define FXJS_XFA_CJX_EXCLGROUP_H_

#include "fxjs/CJX_Define.h"
#include "fxjs/xfa/cjx_node.h"

class CXFA_ExclGroup;

class CJX_ExclGroup : public CJX_Node {
 public:
  explicit CJX_ExclGroup(CXFA_ExclGroup* group);
  ~CJX_ExclGroup() override;

  JS_METHOD(execCalculate, CJX_ExclGroup);
  JS_METHOD(execEvent, CJX_ExclGroup);
  JS_METHOD(execInitialize, CJX_ExclGroup);
  JS_METHOD(execValidate, CJX_ExclGroup);
  JS_METHOD(selectedMember, CJX_ExclGroup);

 private:
  static const CJX_MethodSpec MethodSpecs[];
};

#endif  // FXJS_XFA_CJX_EXCLGROUP_H_
