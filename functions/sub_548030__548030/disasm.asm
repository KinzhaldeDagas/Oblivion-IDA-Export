0x548030: cmp     byte ptr [esp+specializationSkill], 0; Compute Oblivion's precomputed skill-use requirement: pow(baseSkillValue * g_fSkillUseFactor, g_fSkillUseExp), multiplied by g_fSkillUseSpecMult only for a class-specialization match, then by g_fSkillUseMajorMult for a strict major match or g_fSkillUseMinorMult for every fallback/non-major skill. With native defaults the factors are 0.5625 (major+specialized), 0.75 (major), 0.9375 (non-major+specialized), and 1.25 (non-major).
0x548035: jz      short loc_54803F
0x548037: fld     dword ptr ds:0B37670h
0x54803D: jmp     short loc_548041
0x54803F: fld1
0x548041: cmp     [esp+majorSkill], 0
0x548046: fstp    [esp+specializationSkill]
0x54804A: jz      short loc_548054; Strict major match selects g_fSkillUseMajorMult; false selects g_fSkillUseMinorMult. No minor membership lookup occurs.
0x54804C: fld     dword ptr ds:0B37678h
0x548052: jmp     short loc_54805A
0x548054: fld     dword ptr ds:0B37680h
0x54805A: fstp    dword ptr [esp+majorSkill]
0x54805E: fild    [esp+baseSkillValue]
0x548062: fmul    dword ptr ds:0B37D98h
0x548068: fstp    [esp+baseSkillValue]
0x54806C: fld     [esp+baseSkillValue]
0x548070: fld     dword ptr ds:0B37D90h
0x548076: call    __CIpow
0x54807B: fstp    [esp+baseSkillValue]
0x54807F: fld     [esp+baseSkillValue]
0x548083: fmul    [esp+specializationSkill]
0x548087: fmul    dword ptr [esp+majorSkill]
0x54808B: fstp    [esp+specializationSkill]
0x54808F: fld     [esp+specializationSkill]
0x548093: retn
