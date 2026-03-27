0x7100A0: mov     edx, [esp+arg_4]
0x7100A4: fld     dword ptr [edx]
0x7100A6: mov     eax, [esp+arg_0]
0x7100AA: fmul    dword ptr [ecx]
0x7100AC: fld     dword ptr [edx+0Ch]
0x7100AF: fmul    dword ptr [ecx+4]
0x7100B2: faddp   st(1), st
0x7100B4: fld     dword ptr [edx+18h]
0x7100B7: fmul    dword ptr [ecx+8]
0x7100BA: faddp   st(1), st
0x7100BC: fstp    dword ptr [eax]
0x7100BE: fld     dword ptr [ecx+10h]
0x7100C1: fmul    dword ptr [edx+0Ch]
0x7100C4: fld     dword ptr [ecx+0Ch]
0x7100C7: fmul    dword ptr [edx]
0x7100C9: faddp   st(1), st
0x7100CB: fld     dword ptr [edx+18h]
0x7100CE: fmul    dword ptr [ecx+14h]
0x7100D1: faddp   st(1), st
0x7100D3: fstp    dword ptr [eax+0Ch]
0x7100D6: fld     dword ptr [ecx+1Ch]
0x7100D9: fmul    dword ptr [edx+0Ch]
0x7100DC: fld     dword ptr [ecx+18h]
0x7100DF: fmul    dword ptr [edx]
0x7100E1: faddp   st(1), st
0x7100E3: fld     dword ptr [edx+18h]
0x7100E6: fmul    dword ptr [ecx+20h]
0x7100E9: faddp   st(1), st
0x7100EB: fstp    dword ptr [eax+18h]
0x7100EE: fld     dword ptr [edx+4]
0x7100F1: fmul    dword ptr [ecx]
0x7100F3: fld     dword ptr [edx+10h]
0x7100F6: fmul    dword ptr [ecx+4]
0x7100F9: faddp   st(1), st
0x7100FB: fld     dword ptr [ecx+8]
0x7100FE: fmul    dword ptr [edx+1Ch]
0x710101: faddp   st(1), st
0x710103: fstp    dword ptr [eax+4]
0x710106: fld     dword ptr [edx+10h]
0x710109: fmul    dword ptr [ecx+10h]
0x71010C: fld     dword ptr [edx+4]
0x71010F: fmul    dword ptr [ecx+0Ch]
0x710112: faddp   st(1), st
0x710114: fld     dword ptr [edx+1Ch]
0x710117: fmul    dword ptr [ecx+14h]
0x71011A: faddp   st(1), st
0x71011C: fstp    dword ptr [eax+10h]
0x71011F: fld     dword ptr [edx+10h]
0x710122: fmul    dword ptr [ecx+1Ch]
0x710125: fld     dword ptr [ecx+18h]
0x710128: fmul    dword ptr [edx+4]
0x71012B: faddp   st(1), st
0x71012D: fld     dword ptr [edx+1Ch]
0x710130: fmul    dword ptr [ecx+20h]
0x710133: faddp   st(1), st
0x710135: fstp    dword ptr [eax+1Ch]
0x710138: fld     dword ptr [edx+8]
0x71013B: fmul    dword ptr [ecx]
0x71013D: fld     dword ptr [edx+14h]
0x710140: fmul    dword ptr [ecx+4]
0x710143: faddp   st(1), st
0x710145: fld     dword ptr [ecx+8]
0x710148: fmul    dword ptr [edx+20h]
0x71014B: faddp   st(1), st
0x71014D: fstp    dword ptr [eax+8]
0x710150: fld     dword ptr [edx+14h]
0x710153: fmul    dword ptr [ecx+10h]
0x710156: fld     dword ptr [edx+8]
0x710159: fmul    dword ptr [ecx+0Ch]
0x71015C: faddp   st(1), st
0x71015E: fld     dword ptr [edx+20h]
0x710161: fmul    dword ptr [ecx+14h]
0x710164: faddp   st(1), st
0x710166: fstp    dword ptr [eax+14h]
0x710169: fld     dword ptr [edx+14h]
0x71016C: fmul    dword ptr [ecx+1Ch]
0x71016F: fld     dword ptr [ecx+18h]
0x710172: fmul    dword ptr [edx+8]
0x710175: faddp   st(1), st
0x710177: fld     dword ptr [edx+20h]
0x71017A: fmul    dword ptr [ecx+20h]
0x71017D: faddp   st(1), st
0x71017F: fstp    dword ptr [eax+20h]
0x710182: retn    8
