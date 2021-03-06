// GENERATED FILE - DO NOT EDIT.
// Generated by gen_vk_internal_shaders.py.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/BlitResolve.frag.00000017.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kBlitResolve_frag_00000017[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x7d,0x94,0x5b,0x4f,0x93,0x41,
    0x10,0x86,0xb7,0xfd,0xe0,0x2b,0x54,0x68,0x81,0x72,0x90,0x08,0x52,0x81,0x44,0x02,
    0xd8,0x12,0x15,0x04,0xb4,0x1c,0x0c,0x20,0x22,0x50,0x28,0xc6,0x18,0x0f,0xa9,0x04,
    0xaa,0x92,0x28,0x1a,0xe0,0xc2,0x0b,0xe3,0x85,0xff,0x41,0xff,0x84,0xbf,0xcf,0x78,
    0x48,0x4c,0x9c,0xd9,0xef,0x59,0x33,0xe1,0xc2,0x26,0xdb,0xdd,0x79,0xe7,0xdd,0x99,
    0x79,0x77,0x77,0xbe,0x28,0x3d,0x92,0x71,0x2e,0xe5,0xb2,0xae,0xc5,0xbd,0x72,0xc9,
    0xaf,0xd3,0xa5,0x05,0x49,0xe6,0x2f,0x05,0x27,0xbe,0x56,0xb7,0xb7,0xf3,0xa8,0xbe,
    0xfa,0xf8,0x61,0xfd,0xf4,0xf5,0xfe,0x61,0xe3,0xa4,0x7e,0x7a,0xd6,0x38,0x3e,0x38,
    0x7a,0x53,0x6f,0x7c,0x78,0xff,0xee,0xe4,0x4c,0xb8,0x17,0x5c,0xec,0xf7,0xdc,0xdb,
    0xdc,0xdb,0x2c,0x9d,0x9e,0x1d,0x96,0x6e,0x4e,0x4f,0x69,0xac,0x9c,0x8b,0x7c,0x4c,
    0xf5,0xe5,0x25,0x47,0x93,0xcc,0x3a,0xde,0xee,0x1f,0x1d,0x2b,0xde,0x2e,0x63,0x41,
    0x46,0x55,0x46,0x87,0x70,0xd5,0x97,0x31,0xeb,0x36,0x8d,0x29,0xab,0x76,0x9f,0x43,
    0x63,0x38,0xb7,0xee,0x9a,0x5d,0x81,0x5a,0x47,0x98,0x03,0x96,0x02,0x6b,0x31,0x58,
    0x1a,0xac,0xc3,0x60,0x11,0xd8,0x45,0x83,0x35,0x81,0x0d,0x18,0xac,0x19,0xac,0x68,
    0xb0,0x18,0x6c,0xd4,0x60,0x19,0xb0,0x31,0x83,0xb5,0x80,0x4d,0x1a,0xac,0x15,0x6c,
    0xca,0xeb,0x8a,0xfe,0xd5,0xa7,0x1a,0x17,0xd0,0xd8,0x8b,0xbd,0x2c,0xf3,0x30,0xfa,
    0x82,0x7d,0xc5,0xd8,0x55,0xf8,0x5f,0x0b,0x89,0x5d,0x3b,0xc7,0xaf,0xc1,0xd7,0x33,
    0x29,0x48,0x96,0xb4,0xb7,0x23,0xaf,0x5d,0xd7,0x3d,0xc2,0x89,0xd1,0xa6,0x9c,0x3e,
    0xb1,0x33,0xe8,0x4b,0xfb,0x3a,0x22,0xb9,0xfb,0xc4,0xaf,0x3e,0xcd,0x95,0xe5,0x9c,
    0x8a,0xf2,0xdf,0xc6,0x3e,0xc5,0x6f,0x63,0xb7,0x9b,0x58,0x39,0xf8,0x21,0x57,0x17,
    0xb1,0xf4,0x77,0x59,0xd8,0xe1,0xdc,0x72,0x8c,0x98,0x91,0x65,0xee,0x32,0x43,0xf3,
    0x75,0x73,0x7e,0x05,0xf2,0x75,0xfb,0xb8,0x09,0x36,0x81,0x96,0x5e,0xe2,0x2b,0xbf,
    0x0f,0x5f,0xc6,0xf8,0x07,0xb0,0xd5,0x3f,0x88,0x5f,0xe3,0x77,0x4b,0x95,0x45,0x78,
    0x5d,0xe6,0x9c,0xc3,0xbe,0x71,0xee,0x33,0xd8,0xd3,0xec,0xd5,0x38,0x15,0xde,0x53,
    0x96,0xba,0x2a,0xbc,0x69,0xc5,0xfa,0x85,0xb5,0x88,0x2f,0x45,0xcc,0x94,0x19,0xa1,
    0xd6,0x25,0xd6,0x8b,0xc4,0x50,0x7b,0xf9,0x5c,0x0d,0x2b,0xc4,0x54,0xfe,0x2a,0xf9,
    0x63,0xce,0x7a,0x9d,0x75,0xf0,0x6f,0xb3,0x8e,0x89,0xb7,0x4d,0x8f,0x85,0x9a,0x76,
    0xd0,0xfd,0xbf,0x9a,0x76,0x59,0xef,0x10,0x43,0xed,0x1a,0x98,0xe6,0x7c,0x42,0x0c,
    0x7d,0x0f,0x33,0xf2,0xbe,0xd3,0xac,0x1d,0x79,0x7e,0x0a,0xa2,0xfd,0x53,0xe1,0xed,
    0xe4,0x79,0x1f,0x55,0xb9,0x81,0x1c,0xfd,0x98,0x67,0x84,0x1a,0x8e,0x79,0x83,0x9d,
    0xf8,0x97,0x25,0x42,0x1f,0x7d,0xda,0xc3,0xfd,0x56,0xe0,0xf4,0x83,0x7f,0x16,0x8e,
    0xda,0x97,0xd8,0xd7,0xcf,0xbe,0x41,0xff,0xce,0x92,0x7d,0x03,0xec,0xd3,0x7a,0x87,
    0xc0,0xbf,0x09,0xa7,0x48,0xcf,0x0c,0x71,0xe7,0x3f,0xa4,0xf2,0x51,0xea,0xf9,0x2d,
    0xfc,0x61,0xd3,0xeb,0xaa,0x47,0xd7,0xbb,0xb2,0x4f,0xcf,0xf5,0x2a,0x39,0xf5,0xf7,
    0x89,0x3b,0x1a,0x03,0xaf,0x89,0xa5,0x35,0xbd,0x00,0x0b,0xbc,0x5f,0x12,0x23,0xc4,
    0xd2,0xf9,0xbb,0xb0,0x94,0x77,0x08,0xa7,0x99,0x3d,0x23,0x46,0xc3,0x04,0x1a,0xc6,
    0x8d,0x86,0x49,0xf0,0xa0,0xe1,0x1a,0x58,0xd0,0x50,0x36,0x1a,0xd4,0x57,0x92,0x51,
    0x26,0x6f,0xc9,0x68,0xb8,0x4e,0xee,0x94,0xd1,0x70,0x03,0x3c,0x68,0x38,0x00,0x0b,
    0x3c,0xd5,0x10,0x62,0x95,0x8d,0x86,0x06,0x9c,0x51,0xf6,0x94,0x8c,0x86,0x19,0x34,
    0x4c,0x1b,0x0d,0xb7,0xc0,0x83,0x86,0x59,0xb0,0xa0,0x61,0xde,0x68,0x50,0xdf,0x9c,
    0x8c,0x79,0xf2,0xce,0xf1,0x8e,0x34,0xef,0x1d,0x72,0x37,0xcc,0xfb,0xd5,0x1a,0x03,
    0x77,0xde,0xd4,0xf8,0x12,0x5e,0x99,0x7d,0x73,0xd4,0xa3,0x7d,0x77,0x97,0x9e,0xd3,
    0x9a,0xb5,0xbf,0xd6,0xa8,0x79,0x05,0x4e,0xec,0xbf,0xab,0x09,0x1e,0xce,0xef,0x3e,
    0x31,0x9d,0xc1,0x36,0xc0,0x52,0xbe,0x77,0x62,0xdf,0x9b,0x0f,0xe0,0x6e,0x10,0xa3,
    0x2e,0xd5,0x68,0x4f,0x6c,0x92,0x57,0xfd,0x4b,0xbc,0x6f,0x8d,0xa3,0xdf,0x8b,0x2d,
    0xfc,0xce,0x7f,0x4f,0x22,0xff,0x4d,0xd9,0xa2,0x16,0xed,0xc9,0x3d,0xfa,0x51,0x63,
    0x69,0x2f,0x3e,0x05,0x3b,0x1f,0x4b,0xcf,0xfa,0x19,0x7e,0xfd,0x7d,0x44,0xcb,0x73,
    0x70,0x8d,0x5d,0xc5,0xfe,0x23,0x55,0xcf,0xca,0xf8,0x0b,0x48,0x5d,0x4b,0xcf,0x18,
    0x08,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// #extension GL_EXT_samplerless_texture_functions : require
//
// #extension GL_ARB_shader_stencil_export : require
//
// layout(push_constant)uniform PushConstants {
//
//             ivec2 offset;
//     vec2 stretch;
//     vec2 invSrcExtent;
//     int srcLayer;
//     int samples;
//     float invSamples;
//
//     int outputMask;
//
//     bool flipX;
//     bool flipY;
//     bool rotateXY;
// } params;
//
// layout(set = 0, binding = 0)uniform texture2DMSArray depth;
//
// layout(set = 0, binding = 1)uniform utexture2DMSArray stencil;
//
// void main()
// {
//
//             ivec2 srcImageCoords = ivec2(gl_FragCoord . xy);
//
//     srcImageCoords -= params . offset;
//
//     if(params . flipX)
//         srcImageCoords . x = - srcImageCoords . x;
//     if(params . flipY)
//         srcImageCoords . y = - srcImageCoords . y;
//     if(params . rotateXY)
//         srcImageCoords . xy = srcImageCoords . yx;
//
//     gl_FragDepth = texelFetch(depth, ivec3(srcImageCoords, params . srcLayer), 0). x;
//
//     gl_FragStencilRefARB = int(texelFetch(stencil, ivec3(srcImageCoords, params . srcLayer), 0). x);
//
// }
