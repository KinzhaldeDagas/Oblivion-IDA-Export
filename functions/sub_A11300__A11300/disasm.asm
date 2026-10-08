0xA11300: fldz
0xA11302: fst     ShadowLightPointLightPos0Constant; Four-float ShadowLight PointLightPos0 vertex constant registered at c16. Retail caster shader CTAB calls it LightPosition.
0xA11308: fst     flt_B44FDC
0xA1130E: fst     flt_B44FE0
0xA11314: fst     ShadowLightPointLightPos0DepthRange; PointLightPos0.w / LightPosition.w. Native mode-5 SLS caster pixel shaders divide projected depth by this value; rigid geometry receives object-scale correction.
0xA1131A: fst     dword ptr unk_B44FE8
0xA11320: fst     dword ptr unk_B44FEC
0xA11326: fst     dword ptr unk_B44FF0
0xA1132C: fst     dword ptr unk_B44FF4
0xA11332: fst     dword ptr unk_B44FF8
0xA11338: fst     dword ptr unk_B44FFC
0xA1133E: fst     dword ptr unk_B45000
0xA11344: fst     dword ptr unk_B45004
0xA1134A: fst     dword ptr unk_B45008
0xA11350: fst     dword ptr unk_B4500C
0xA11356: fst     dword ptr unk_B45010
0xA1135C: fstp    dword ptr unk_B45014
0xA11362: retn
