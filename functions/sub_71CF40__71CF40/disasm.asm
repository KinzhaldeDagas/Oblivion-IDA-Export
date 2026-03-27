0x71CF40: sub     esp, 42Ch
0x71CF46: mov     eax, [esp+42Ch+arg_10]
0x71CF4D: push    ebx
0x71CF4E: push    esi
0x71CF4F: push    edi
0x71CF50: mov     edi, [eax+14h]
0x71CF53: mov     eax, [esp+438h+arg_14]
0x71CF5A: mov     ecx, [eax]
0x71CF5C: movzx   edx, byte ptr [eax+16h]
0x71CF60: mov     [esp+438h+var_41C], ecx
0x71CF64: movzx   ecx, byte ptr [eax+12h]
0x71CF68: mov     [esp+438h+var_42C], ecx
0x71CF6C: movzx   ecx, byte ptr [eax+15h]
0x71CF70: mov     [esp+438h+var_420], edx
0x71CF74: mov     edx, [eax+8]
0x71CF77: mov     [esp+438h+var_424], ecx
0x71CF7B: mov     ecx, [eax+4]
0x71CF7E: movzx   ebx, byte ptr [eax+14h]
0x71CF82: movzx   esi, byte ptr [eax+10h]
0x71CF86: mov     [esp+438h+var_428], edx
0x71CF8A: movzx   edx, byte ptr [eax+11h]
0x71CF8E: mov     [esp+438h+var_418], ecx
0x71CF92: movzx   ecx, byte ptr [eax+17h]
0x71CF96: mov     [esp+438h+var_414], edx
0x71CF9A: mov     edx, 0FFh
0x71CF9F: shr     edx, cl
0x71CFA1: movzx   ecx, byte ptr [eax+13h]
0x71CFA5: shl     edx, cl
0x71CFA7: lea     ecx, [esp+438h+var_3FD]
0x71CFAB: sub     ecx, edi
0x71CFAD: mov     [esp+438h+var_404], ecx
0x71CFB1: and     edx, [eax+0Ch]
0x71CFB4: lea     ecx, [esp+438h+var_3F9]
0x71CFB8: sub     ecx, edi
0x71CFBA: mov     [esp+438h+var_40C], ecx
0x71CFBE: lea     ecx, [esp+438h+var_3F5]
0x71CFC2: sub     ecx, edi
0x71CFC4: mov     [esp+438h+var_410], 0
0x71CFCC: lea     eax, [edi+1]
0x71CFCF: mov     [esp+438h+var_408], ecx
0x71CFD3: push    ebp
0x71CFD4: movzx   edi, byte ptr [eax-1]
0x71CFD8: movzx   ebp, byte ptr [eax+1]
0x71CFDC: mov     cl, bl
0x71CFDE: shr     edi, cl
0x71CFE0: mov     ecx, esi
0x71CFE2: shl     edi, cl
0x71CFE4: movzx   ecx, byte ptr [esp+43Ch+var_420]
0x71CFE9: shr     ebp, cl
0x71CFEB: and     edi, [esp+43Ch+var_41C]
0x71CFEF: mov     ecx, [esp+43Ch+var_42C]
0x71CFF3: shl     ebp, cl
0x71CFF5: movzx   ecx, byte ptr [esp+43Ch+var_424]
0x71CFFA: and     ebp, [esp+43Ch+var_428]
0x71CFFE: or      edi, ebp
0x71D000: movzx   ebp, byte ptr [eax]
0x71D003: shr     ebp, cl
0x71D005: mov     ecx, [esp+43Ch+var_414]
0x71D009: shl     ebp, cl
0x71D00B: mov     ecx, [esp+43Ch+var_410]
0x71D00F: and     ebp, [esp+43Ch+var_418]
0x71D013: or      edi, ebp
0x71D015: or      edi, edx
0x71D017: mov     [esp+ecx*4+3Ch], edi
0x71D01B: movzx   edi, byte ptr [eax+3]
0x71D01F: movzx   ebp, byte ptr [eax+4]
0x71D023: mov     cl, bl
0x71D025: shr     edi, cl
0x71D027: mov     ecx, esi
0x71D029: shl     edi, cl
0x71D02B: movzx   ecx, byte ptr [esp+43Ch+var_424]
0x71D030: and     edi, [esp+43Ch+var_41C]
0x71D034: shr     ebp, cl
0x71D036: mov     ecx, [esp+43Ch+var_414]
0x71D03A: shl     ebp, cl
0x71D03C: movzx   ecx, byte ptr [esp+43Ch+var_420]
0x71D041: and     ebp, [esp+43Ch+var_418]
0x71D045: or      edi, ebp
0x71D047: movzx   ebp, byte ptr [eax+5]
0x71D04B: shr     ebp, cl
0x71D04D: mov     ecx, [esp+43Ch+var_42C]
0x71D051: shl     ebp, cl
0x71D053: mov     ecx, [esp+43Ch+var_404]
0x71D057: and     ebp, [esp+43Ch+var_428]
0x71D05B: or      edi, ebp
0x71D05D: movzx   ebp, byte ptr [eax+8]
0x71D061: or      edi, edx
0x71D063: mov     [ecx+eax], edi
0x71D066: movzx   edi, byte ptr [eax+7]
0x71D06A: mov     cl, bl
0x71D06C: shr     edi, cl
0x71D06E: mov     ecx, esi
0x71D070: shl     edi, cl
0x71D072: movzx   ecx, byte ptr [esp+43Ch+var_424]
0x71D077: and     edi, [esp+43Ch+var_41C]
0x71D07B: shr     ebp, cl
0x71D07D: mov     ecx, [esp+43Ch+var_414]
0x71D081: shl     ebp, cl
0x71D083: movzx   ecx, byte ptr [esp+43Ch+var_420]
0x71D088: and     ebp, [esp+43Ch+var_418]
0x71D08C: or      edi, ebp
0x71D08E: movzx   ebp, byte ptr [eax+9]
0x71D092: shr     ebp, cl
0x71D094: mov     ecx, [esp+43Ch+var_42C]
0x71D098: shl     ebp, cl
0x71D09A: mov     ecx, [esp+43Ch+var_40C]
0x71D09E: and     ebp, [esp+43Ch+var_428]
0x71D0A2: or      edi, ebp
0x71D0A4: movzx   ebp, byte ptr [eax+0Ch]
0x71D0A8: or      edi, edx
0x71D0AA: mov     [ecx+eax], edi
0x71D0AD: movzx   edi, byte ptr [eax+0Bh]
0x71D0B1: mov     cl, bl
0x71D0B3: shr     edi, cl
0x71D0B5: mov     ecx, esi
0x71D0B7: shl     edi, cl
0x71D0B9: movzx   ecx, byte ptr [esp+43Ch+var_424]
0x71D0BE: and     edi, [esp+43Ch+var_41C]
0x71D0C2: shr     ebp, cl
0x71D0C4: mov     ecx, [esp+43Ch+var_414]
0x71D0C8: shl     ebp, cl
0x71D0CA: and     ebp, [esp+43Ch+var_418]
0x71D0CE: movzx   ecx, byte ptr [esp+43Ch+var_420]
0x71D0D3: or      edi, ebp
0x71D0D5: movzx   ebp, byte ptr [eax+0Dh]
0x71D0D9: shr     ebp, cl
0x71D0DB: mov     ecx, [esp+43Ch+var_42C]
0x71D0DF: add     eax, 10h
0x71D0E2: shl     ebp, cl
0x71D0E4: mov     ecx, [esp+43Ch+var_408]
0x71D0E8: and     ebp, [esp+43Ch+var_428]
0x71D0EC: or      edi, ebp
0x71D0EE: or      edi, edx
0x71D0F0: mov     [ecx+eax-10h], edi
0x71D0F4: mov     ecx, [esp+43Ch+var_410]
0x71D0F8: add     ecx, 4
0x71D0FB: cmp     ecx, 100h
0x71D101: mov     [esp+43Ch+var_410], ecx
0x71D105: jb      loc_71CFD4
0x71D10B: mov     ecx, [esp+43Ch+arg_4]
0x71D112: test    ecx, ecx
0x71D114: mov     eax, [esp+43Ch+arg_C]
0x71D11B: pop     ebp
0x71D11C: jbe     short loc_71D14F
0x71D11E: mov     esi, [esp+438h+arg_0]
0x71D125: mov     edi, ecx
0x71D127: mov     ecx, [esp+438h+arg_18]
0x71D12E: mov     edi, edi
0x71D130: test    esi, esi
0x71D132: jbe     short loc_71D14A
0x71D134: mov     edx, esi
0x71D136: movzx   ebx, byte ptr [ecx]
0x71D139: mov     ebx, [esp+ebx*4+38h]
0x71D13D: mov     [eax], ebx
0x71D13F: add     eax, 4
0x71D142: add     ecx, 1
0x71D145: sub     edx, 1
0x71D148: jnz     short loc_71D136
0x71D14A: sub     edi, 1
0x71D14D: jnz     short loc_71D130
0x71D14F: pop     edi
0x71D150: pop     esi
0x71D151: pop     ebx
0x71D152: add     esp, 42Ch
0x71D158: retn
