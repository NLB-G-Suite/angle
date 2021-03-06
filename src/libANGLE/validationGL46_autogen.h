// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// validationGL46_autogen.h:
//   Validation functions for the OpenGL 4.6 entry points.

#ifndef LIBANGLE_VALIDATION_GL46_AUTOGEN_H_
#define LIBANGLE_VALIDATION_GL46_AUTOGEN_H_

#include "common/PackedEnums.h"

namespace gl
{
class Context;

bool ValidateMultiDrawArraysIndirectCount(const Context *context,
                                          GLenum mode,
                                          const void *indirect,
                                          GLintptr drawcount,
                                          GLsizei maxdrawcount,
                                          GLsizei stride);
bool ValidateMultiDrawElementsIndirectCount(const Context *context,
                                            GLenum mode,
                                            GLenum type,
                                            const void *indirect,
                                            GLintptr drawcount,
                                            GLsizei maxdrawcount,
                                            GLsizei stride);
bool ValidatePolygonOffsetClamp(const Context *context,
                                GLfloat factor,
                                GLfloat units,
                                GLfloat clamp);
bool ValidateSpecializeShader(const Context *context,
                              GLuint shader,
                              const GLchar *pEntryPoint,
                              GLuint numSpecializationConstants,
                              const GLuint *pConstantIndex,
                              const GLuint *pConstantValue);
}  // namespace gl

#endif  // LIBANGLE_VALIDATION_GL46_AUTOGEN_H_
