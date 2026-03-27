0x95C530: sub     esp, 2F0h
0x95C536: push    ebx
0x95C537: mov     ebx, [esp+2F4h+arg_8]
0x95C53E: cmp     dword ptr [ebx+8], 0
0x95C542: push    ebp
0x95C543: push    esi
0x95C544: mov     esi, [esp+2FCh+arg_C]
0x95C54B: push    edi
0x95C54C: jz      loc_95D3BE
0x95C552: cmp     dword ptr [esi+0B8h], 0
0x95C559: jnz     loc_95D3BE
0x95C55F: mov     eax, [esi]
0x95C561: mov     edx, [eax+4]
0x95C564: mov     ecx, esi
0x95C566: call    edx
0x95C568: test    eax, eax
0x95C56A: jz      short loc_95C57E
0x95C56C: lea     esp, [esp+0]
0x95C570: cmp     eax, offset dword_B3FD04
0x95C575: jz      short loc_95C5B5
0x95C577: mov     eax, [eax+4]
0x95C57A: test    eax, eax
0x95C57C: jnz     short loc_95C570
0x95C57E: push    esi
0x95C57F: push    offset dword_B3FCD4
0x95C584: call    NiRTTI__IsObjectOfRTTIType
0x95C589: add     esp, 8
0x95C58C: test    al, al
0x95C58E: jz      short loc_95C5E7
0x95C590: mov     eax, [esp+300h+arg_4]
0x95C597: mov     ecx, [esp+300h+arg_0]
0x95C59E: push    esi
0x95C59F: push    ebx
0x95C5A0: push    eax
0x95C5A1: push    ecx
0x95C5A2: call    sub_95B240
0x95C5A7: add     esp, 10h
0x95C5AA: pop     edi
0x95C5AB: pop     esi
0x95C5AC: pop     ebp
0x95C5AD: pop     ebx
0x95C5AE: add     esp, 2F0h
0x95C5B4: retn
0x95C5B5: mov     eax, [esi+0B4h]
0x95C5BB: cmp     word ptr [eax+44h], 1
0x95C5C0: jnz     short loc_95C5E7
0x95C5C2: mov     ecx, [esp+300h+arg_4]
0x95C5C9: mov     edx, [esp+300h+arg_0]
0x95C5D0: push    esi
0x95C5D1: push    ebx
0x95C5D2: push    ecx
0x95C5D3: push    edx
0x95C5D4: call    sub_95A380
0x95C5D9: add     esp, 10h
0x95C5DC: pop     edi
0x95C5DD: pop     esi
0x95C5DE: pop     ebp
0x95C5DF: pop     ebx
0x95C5E0: add     esp, 2F0h
0x95C5E6: retn
0x95C5E7: mov     eax, [esp+300h+arg_0]
0x95C5EE: fld     dword ptr [eax]
0x95C5F0: lea     ebx, [esi+64h]
0x95C5F3: fsub    dword ptr [ebx+24h]
0x95C5F6: push    ebx
0x95C5F7: lea     edx, [esp+304h+var_13C]
0x95C5FE: push    edx
0x95C5FF: fstp    [esp+308h+var_13C]
0x95C606: fld     dword ptr [eax+4]
0x95C609: fsub    dword ptr [ebx+28h]
0x95C60C: fstp    [esp+308h+var_138]
0x95C613: fld     dword ptr [eax+8]
0x95C616: lea     eax, [esp+308h+var_220]
0x95C61D: fsub    dword ptr [ebx+2Ch]
0x95C620: push    eax
0x95C621: fstp    [esp+30Ch+var_134]
0x95C628: fld     dword ptr [ebx+30h]
0x95C62B: fld1
0x95C62D: fdivrp  st(1), st
0x95C62F: fstp    [esp+30Ch+var_2D8]
0x95C633: call    sub_710250
0x95C638: fld     dword ptr [eax+4]
0x95C63B: fld     [esp+30Ch+var_2D8]
0x95C63F: mov     ecx, [esp+30Ch+arg_4]
0x95C646: fld     st
0x95C648: push    ebx
0x95C649: fmulp   st(2), st
0x95C64B: push    ecx
0x95C64C: fxch    st(1)
0x95C64E: lea     edx, [esp+314h+var_220]
0x95C655: push    edx
0x95C656: fstp    [esp+318h+var_2BC]
0x95C65A: fld     dword ptr [eax+8]
0x95C65D: fmul    st, st(1)
0x95C65F: fstp    [esp+318h+var_2C4]
0x95C663: fmul    dword ptr [eax]
0x95C665: fstp    [esp+318h+var_118]
0x95C66C: fld     [esp+318h+var_2BC]
0x95C670: fstp    [esp+318h+var_114]
0x95C677: fld     [esp+318h+var_2C4]
0x95C67B: fstp    [esp+318h+var_110]
0x95C682: call    sub_710250
0x95C687: fld     dword ptr [eax+4]
0x95C68A: mov     ecx, [esi+0B4h]
0x95C690: fld     [esp+318h+var_2D8]
0x95C694: add     esp, 18h
0x95C697: fld     st
0x95C699: mov     byte ptr [esp+300h+var_2E4+3], 0
0x95C69E: fmulp   st(2), st
0x95C6A0: fxch    st(1)
0x95C6A2: fstp    [esp+300h+var_2BC]
0x95C6A6: fld     dword ptr [eax+8]
0x95C6A9: fmul    st, st(1)
0x95C6AB: fstp    [esp+300h+var_2D8]
0x95C6AF: fmul    dword ptr [eax]
0x95C6B1: fstp    [esp+300h+var_124]
0x95C6B8: fld     [esp+300h+var_2BC]
0x95C6BC: fstp    [esp+300h+var_120]
0x95C6C3: fld     [esp+300h+var_2D8]
0x95C6C7: fstp    [esp+300h+var_11C]
0x95C6CE: mov     eax, [ecx]
0x95C6D0: mov     edx, [eax+5Ch]
0x95C6D3: call    edx
0x95C6D5: mov     ebp, [esi+0B4h]
0x95C6DB: movzx   eax, ax
0x95C6DE: mov     [esp+300h+var_2BC], eax
0x95C6E2: xor     eax, eax
0x95C6E4: mov     [esp+300h+var_1FC], eax
0x95C6EB: mov     [esp+300h+var_1F8], eax
0x95C6F2: mov     byte ptr [esp+300h+var_1F4], al
0x95C6F9: mov     edi, [ebp+1Ch]
0x95C6FC: cmp     edi, eax
0x95C6FE: mov     byte ptr [esp+300h+var_2E4+2], 0
0x95C703: mov     [esp+300h+var_2C4], ebp
0x95C707: mov     [esp+300h+var_2E0], edi
0x95C70B: jnz     short loc_95C73B
0x95C70D: mov     ecx, [ebp+34h]
0x95C710: cmp     ecx, eax
0x95C712: jz      short loc_95C73B
0x95C714: mov     edx, [ecx]
0x95C716: mov     eax, [edx+4Ch]
0x95C719: call    eax
0x95C71B: test    al, al
0x95C71D: jz      short loc_95C73B
0x95C71F: push    1
0x95C721: mov     ecx, ebp
0x95C723: call    sub_728AB0
0x95C728: lea     ecx, [esp+300h+var_1FC]
0x95C72F: push    ecx
0x95C730: mov     ecx, ebp
0x95C732: mov     byte ptr [esp+304h+var_2E4+2], al
0x95C736: call    sub_728B60
0x95C73B: cmp     word ptr [esp+300h+var_2BC], 0
0x95C741: mov     [esp+300h+var_2D8], 0
0x95C749: jbe     loc_95D380
0x95C74F: nop
0x95C750: mov     ecx, [esi+0B4h]
0x95C756: mov     edx, [ecx]
0x95C758: mov     edx, [edx+60h]
0x95C75B: lea     eax, [esp+300h+var_2EC]
0x95C75F: push    eax
0x95C760: lea     eax, [esp+304h+var_2E8]
0x95C764: push    eax
0x95C765: lea     eax, [esp+308h+var_2F0]
0x95C769: push    eax
0x95C76A: mov     eax, [esp+30Ch+var_2D8]
0x95C76E: push    eax
0x95C76F: call    edx
0x95C771: test    edi, edi
0x95C773: movzx   eax, word ptr [esp+300h+var_2F0]
0x95C778: jnz     loc_95C801
0x95C77E: mov     ecx, [esp+300h+var_1F8]
0x95C785: mov     edx, [esp+300h+var_1FC]
0x95C78C: imul    eax, ecx
0x95C78F: mov     ebp, [eax+edx]
0x95C792: add     eax, edx
0x95C794: mov     [esp+300h+var_250], ebp
0x95C79B: mov     ebp, [eax+4]
0x95C79E: mov     [esp+300h+var_24C], ebp
0x95C7A5: mov     eax, [eax+8]
0x95C7A8: mov     [esp+300h+var_248], eax
0x95C7AF: movzx   eax, word ptr [esp+300h+var_2E8]
0x95C7B4: imul    eax, ecx
0x95C7B7: mov     ebp, [eax+edx]
0x95C7BA: add     eax, edx
0x95C7BC: mov     [esp+300h+var_268], ebp
0x95C7C3: mov     ebp, [eax+4]
0x95C7C6: mov     [esp+300h+var_264], ebp
0x95C7CD: mov     eax, [eax+8]
0x95C7D0: mov     [esp+300h+var_260], eax
0x95C7D7: movzx   eax, word ptr [esp+300h+var_2EC]
0x95C7DC: imul    eax, ecx
0x95C7DF: mov     ecx, [eax+edx]
0x95C7E2: add     eax, edx
0x95C7E4: mov     [esp+300h+var_25C], ecx
0x95C7EB: mov     edx, [eax+4]
0x95C7EE: mov     [esp+300h+var_258], edx
0x95C7F5: mov     eax, [eax+8]
0x95C7F8: mov     [esp+300h+var_254], eax
0x95C7FF: jmp     short loc_95C877
0x95C801: lea     ecx, [eax+eax*2]
0x95C804: mov     edx, [edi+ecx*4]
0x95C807: lea     eax, [edi+ecx*4]
0x95C80A: mov     [esp+300h+var_250], edx
0x95C811: mov     ecx, [eax+4]
0x95C814: mov     [esp+300h+var_24C], ecx
0x95C81B: mov     edx, [eax+8]
0x95C81E: movzx   eax, word ptr [esp+300h+var_2E8]
0x95C823: lea     eax, [eax+eax*2]
0x95C826: mov     [esp+300h+var_248], edx
0x95C82D: mov     ecx, [edi+eax*4]
0x95C830: lea     eax, [edi+eax*4]
0x95C833: mov     [esp+300h+var_268], ecx
0x95C83A: mov     edx, [eax+4]
0x95C83D: mov     [esp+300h+var_264], edx
0x95C844: mov     eax, [eax+8]
0x95C847: mov     [esp+300h+var_260], eax
0x95C84E: movzx   eax, word ptr [esp+300h+var_2EC]
0x95C853: lea     ecx, [eax+eax*2]
0x95C856: mov     edx, [edi+ecx*4]
0x95C859: lea     eax, [edi+ecx*4]
0x95C85C: mov     [esp+300h+var_25C], edx
0x95C863: mov     ecx, [eax+4]
0x95C866: mov     [esp+300h+var_258], ecx
0x95C86D: mov     edx, [eax+8]
0x95C870: mov     [esp+300h+var_254], edx
0x95C877: mov     ebp, [esp+300h+arg_8]
0x95C87E: mov     al, [ebp+10h]
0x95C881: mov     byte ptr [esp+300h+var_170], al
0x95C888: lea     ecx, [esp+300h+var_2C0]
0x95C88C: push    ecx
0x95C88D: lea     edx, [esp+304h+var_2C8]
0x95C891: push    edx
0x95C892: mov     edx, [esp+308h+var_170]
0x95C899: lea     eax, [esp+308h+var_1B0]
0x95C8A0: push    eax
0x95C8A1: lea     ecx, [esp+30Ch+var_238]
0x95C8A8: push    ecx
0x95C8A9: push    edx
0x95C8AA: lea     eax, [esp+314h+var_25C]
0x95C8B1: push    eax
0x95C8B2: lea     ecx, [esp+318h+var_268]
0x95C8B9: push    ecx
0x95C8BA: lea     edx, [esp+31Ch+var_250]
0x95C8C1: push    edx
0x95C8C2: lea     eax, [esp+320h+var_124]
0x95C8C9: push    eax
0x95C8CA: lea     ecx, [esp+324h+var_118]
0x95C8D1: push    ecx
0x95C8D2: call    sub_96E5E0
0x95C8D7: add     esp, 28h
0x95C8DA: test    al, al
0x95C8DC: jz      loc_95D366
0x95C8E2: push    44h ; 'D'; Size
0x95C8E4: mov     byte ptr [esp+304h+var_2E4+3], 1
0x95C8E9: call    FormHeapAlloc
0x95C8EE: xor     edi, edi
0x95C8F0: add     esp, 4
0x95C8F3: cmp     eax, edi
0x95C8F5: jz      short loc_95C903
0x95C8F7: push    esi
0x95C8F8: mov     ecx, eax
0x95C8FA: call    sub_95A2D0
0x95C8FF: mov     esi, eax
0x95C901: jmp     short loc_95C905
0x95C903: xor     esi, esi
0x95C905: cmp     dword ptr [ebp+0Ch], 1
0x95C909: jnz     loc_95C9AF
0x95C90F: lea     edx, [esp+300h+var_238]
0x95C916: push    edx
0x95C917: lea     eax, [esp+304h+var_C8]
0x95C91E: push    eax
0x95C91F: mov     ecx, ebx
0x95C921: call    sub_7101F0
0x95C926: fld     dword ptr [ebx+30h]
0x95C929: fstp    [esp+300h+var_2DC]
0x95C92D: fld     [esp+300h+var_2DC]
0x95C931: fld     st
0x95C933: fmul    dword ptr [eax]
0x95C935: fstp    [esp+300h+var_1D8]
0x95C93C: fld     dword ptr [eax+4]
0x95C93F: fmul    st, st(1)
0x95C941: fstp    [esp+300h+var_1D4]
0x95C948: fmul    dword ptr [eax+8]
0x95C94B: fstp    [esp+300h+var_1D0]
0x95C952: fld     [esp+300h+var_1D8]
0x95C959: fadd    dword ptr [ebx+24h]
0x95C95C: fstp    [esp+300h+var_1E4]
0x95C963: mov     ecx, [esp+300h+var_1E4]
0x95C96A: fld     dword ptr [ebx+28h]
0x95C96D: mov     [esp+300h+var_238], ecx
0x95C974: fadd    [esp+300h+var_1D4]
0x95C97B: fstp    [esp+300h+var_1E0]
0x95C982: mov     edx, [esp+300h+var_1E0]
0x95C989: fld     dword ptr [ebx+2Ch]
0x95C98C: mov     [esp+300h+var_234], edx
0x95C993: fadd    [esp+300h+var_1D0]
0x95C99A: fstp    [esp+300h+var_1DC]
0x95C9A1: mov     eax, [esp+300h+var_1DC]
0x95C9A8: mov     [esp+300h+var_230], eax
0x95C9AF: mov     ecx, [esp+300h+var_238]
0x95C9B6: mov     [esi+8], ecx
0x95C9B9: mov     edx, [esp+300h+var_234]
0x95C9C0: mov     cx, word ptr [esp+300h+var_2D8]
0x95C9C5: mov     [esi+0Ch], edx
0x95C9C8: mov     eax, [esp+300h+var_230]
0x95C9CF: mov     [esi+10h], eax
0x95C9D2: fld     [esp+300h+var_1B0]
0x95C9D9: fstp    dword ptr [esi+14h]
0x95C9DC: mov     [esi+18h], cx
0x95C9E0: movzx   eax, word ptr [esp+300h+var_2EC]
0x95C9E5: movzx   ecx, word ptr [esp+300h+var_2E8]
0x95C9EA: mov     dx, word ptr [esp+300h+var_2F0]
0x95C9EF: mov     [esi+1Ah], dx
0x95C9F3: mov     [esi+1Ch], cx
0x95C9F7: mov     [esi+1Eh], ax
0x95C9FB: cmp     byte ptr [ebp+2Ch], 0
0x95C9FF: fld     [esp+300h+var_2C8]
0x95CA03: fadd    [esp+300h+var_2C0]
0x95CA07: fld1
0x95CA09: fsubrp  st(1), st
0x95CA0B: fstp    [esp+300h+var_2DC]
0x95CA0F: jz      loc_95CC81
0x95CA15: mov     ecx, [esp+300h+var_2C4]
0x95CA19: lea     eax, [esp+300h+var_1A0]
0x95CA20: push    eax
0x95CA21: push    edi
0x95CA22: mov     [esp+308h+var_1A0], edi
0x95CA29: mov     [esp+308h+var_19C], edi
0x95CA30: mov     byte ptr [esp+308h+var_198], 0
0x95CA38: call    sub_728E70
0x95CA3D: mov     edi, [esp+300h+var_1A0]
0x95CA44: test    edi, edi
0x95CA46: jz      loc_95CB7D
0x95CA4C: movzx   eax, word ptr [esp+300h+var_2F0]
0x95CA51: movzx   ecx, word ptr [esp+300h+var_2E8]
0x95CA56: mov     ebp, [esp+300h+var_19C]
0x95CA5D: movzx   edx, word ptr [esp+300h+var_2EC]
0x95CA62: imul    eax, ebp
0x95CA65: imul    ecx, ebp
0x95CA68: imul    edx, ebp
0x95CA6B: add     eax, edi
0x95CA6D: add     ecx, edi
0x95CA6F: add     edx, edi
0x95CA71: mov     edi, [edx]
0x95CA73: mov     edx, [edx+4]
0x95CA76: mov     [esp+300h+var_2A8], edi
0x95CA7A: mov     [esp+300h+var_2A4], edx
0x95CA7E: fld     [esp+300h+var_2A8]
0x95CA82: mov     edx, [ecx]
0x95CA84: fld     [esp+300h+var_2C0]
0x95CA88: mov     ecx, [ecx+4]
0x95CA8B: fld     st
0x95CA8D: mov     [esp+300h+var_280], edx
0x95CA94: fmulp   st(2), st
0x95CA96: mov     edx, [eax]
0x95CA98: fxch    st(1)
0x95CA9A: mov     eax, [eax+4]
0x95CA9D: mov     [esp+300h+var_27C], ecx
0x95CAA4: fstp    [esp+300h+var_2A8]
0x95CAA8: mov     [esp+300h+var_2B0], edx
0x95CAAC: mov     [esp+300h+var_2AC], eax
0x95CAB0: fmul    [esp+300h+var_2A4]
0x95CAB4: mov     ebp, [esp+300h+arg_8]
0x95CABB: fstp    [esp+300h+var_2A4]
0x95CABF: fld     [esp+300h+var_280]
0x95CAC6: fld     [esp+300h+var_2C8]
0x95CACA: fld     st
0x95CACC: fmulp   st(2), st
0x95CACE: fxch    st(1)
0x95CAD0: fstp    [esp+300h+var_280]
0x95CAD7: fmul    [esp+300h+var_27C]
0x95CADE: fstp    [esp+300h+var_27C]
0x95CAE5: fld     [esp+300h+var_2B0]
0x95CAE9: fld     [esp+300h+var_2DC]
0x95CAED: fld     st
0x95CAEF: fmulp   st(2), st
0x95CAF1: fxch    st(1)
0x95CAF3: fstp    [esp+300h+var_2B0]
0x95CAF7: mov     ecx, [esp+300h+var_2B0]
0x95CAFB: mov     [esp+300h+var_294], ecx
0x95CAFF: fmul    [esp+300h+var_2AC]
0x95CB03: fstp    [esp+300h+var_2AC]
0x95CB07: mov     edx, [esp+300h+var_2AC]
0x95CB0B: fld     [esp+300h+var_2B0]
0x95CB0F: mov     [esp+300h+var_290], edx
0x95CB13: fadd    [esp+300h+var_280]
0x95CB1A: fstp    [esp+300h+var_294]
0x95CB1E: mov     eax, [esp+300h+var_294]
0x95CB22: fld     [esp+300h+var_290]
0x95CB26: mov     [esp+300h+var_278], eax
0x95CB2D: fadd    [esp+300h+var_27C]
0x95CB34: fstp    [esp+300h+var_290]
0x95CB38: mov     ecx, [esp+300h+var_290]
0x95CB3C: fld     [esp+300h+var_294]
0x95CB40: mov     [esp+300h+var_274], ecx
0x95CB47: fadd    [esp+300h+var_2A8]
0x95CB4B: fstp    [esp+300h+var_278]
0x95CB52: mov     edx, [esp+300h+var_278]
0x95CB59: fld     [esp+300h+var_274]
0x95CB60: mov     [esi+20h], edx
0x95CB63: fadd    [esp+300h+var_2A4]
0x95CB67: fstp    [esp+300h+var_274]
0x95CB6E: mov     eax, [esp+300h+var_274]
0x95CB75: mov     [esi+24h], eax
0x95CB78: jmp     loc_95CC93
0x95CB7D: mov     ecx, [esp+300h+arg_C]
0x95CB84: mov     edx, [ecx+0B4h]
0x95CB8A: mov     edi, [edx+28h]
0x95CB8D: test    edi, edi
0x95CB8F: jz      loc_95CC6E
0x95CB95: movzx   eax, word ptr [esp+300h+var_2E8]
0x95CB9A: fld     [esp+300h+var_2C8]
0x95CB9E: lea     ecx, [edi+eax*8]
0x95CBA1: push    ecx; int
0x95CBA2: push    ecx
0x95CBA3: lea     edx, [esp+308h+var_E4]
0x95CBAA: fstp    [esp+308h+var_308]; float
0x95CBAD: push    edx; int
0x95CBAE: call    sub_95A280
0x95CBB3: fld     [esp+30Ch+var_2DC]
0x95CBB7: mov     ebp, eax
0x95CBB9: movzx   eax, word ptr [esp+30Ch+var_2F0]
0x95CBBE: add     esp, 0Ch
0x95CBC1: lea     ecx, [edi+eax*8]
0x95CBC4: push    ecx; int
0x95CBC5: push    ecx
0x95CBC6: lea     edx, [esp+308h+var_DC]
0x95CBCD: fstp    [esp+308h+var_308]; float
0x95CBD0: push    edx; int
0x95CBD1: call    sub_95A280
0x95CBD6: mov     ecx, [eax]
0x95CBD8: fld     dword ptr [ebp+0]
0x95CBDB: mov     edx, [eax+4]
0x95CBDE: movzx   eax, word ptr [esp+30Ch+var_2EC]
0x95CBE3: mov     [esp+30Ch+var_2B8], ecx
0x95CBE7: mov     [esp+30Ch+var_2B4], edx
0x95CBEB: fadd    [esp+30Ch+var_2B8]
0x95CBEF: add     esp, 0Ch
0x95CBF2: lea     ecx, [edi+eax*8]
0x95CBF5: push    ecx; int
0x95CBF6: fstp    [esp+304h+var_2B8]
0x95CBFA: push    ecx
0x95CBFB: fld     dword ptr [ebp+4]
0x95CBFE: lea     edx, [esp+308h+var_EC]
0x95CC05: fadd    [esp+308h+var_2B4]
0x95CC09: fstp    [esp+308h+var_2B4]
0x95CC0D: fld     [esp+308h+var_2C0]
0x95CC11: fstp    [esp+308h+var_308]; float
0x95CC14: push    edx; int
0x95CC15: call    sub_95A280
0x95CC1A: fld     [esp+30Ch+var_2B8]
0x95CC1E: fadd    dword ptr [eax]
0x95CC20: mov     ecx, [esp+30Ch+var_2B8]
0x95CC24: mov     edx, [esp+30Ch+var_2B4]
0x95CC28: mov     ebp, [esp+30Ch+arg_8]
0x95CC2F: mov     [esp+30Ch+var_270], ecx
0x95CC36: fstp    [esp+30Ch+var_270]
0x95CC3D: fld     dword ptr [eax+4]
0x95CC40: mov     eax, [esp+30Ch+var_270]
0x95CC47: mov     [esp+30Ch+var_26C], edx
0x95CC4E: fadd    [esp+30Ch+var_26C]
0x95CC55: add     esp, 0Ch
0x95CC58: mov     [esi+20h], eax
0x95CC5B: fstp    [esp+300h+var_26C]
0x95CC62: mov     ecx, [esp+300h+var_26C]
0x95CC69: mov     [esi+24h], ecx
0x95CC6C: jmp     short loc_95CC93
0x95CC6E: mov     edx, ds:0B3FC80h
0x95CC74: mov     [esi+20h], edx
0x95CC77: mov     eax, ds:0B3FC84h
0x95CC7C: mov     [esi+24h], eax
0x95CC7F: jmp     short loc_95CC93
0x95CC81: mov     ecx, ds:0B3FC80h
0x95CC87: mov     [esi+20h], ecx
0x95CC8A: mov     edx, ds:0B3FC84h
0x95CC90: mov     [esi+24h], edx
0x95CC93: cmp     byte ptr [ebp+2Dh], 0
0x95CC97: jz      loc_95D07E
0x95CC9D: mov     ecx, [esp+300h+var_2C4]
0x95CCA1: lea     eax, [esp+300h+var_188]
0x95CCA8: xor     edi, edi
0x95CCAA: push    eax
0x95CCAB: mov     [esp+304h+var_188], edi
0x95CCB2: mov     [esp+304h+var_184], edi
0x95CCB9: mov     byte ptr [esp+304h+var_180], 0
0x95CCC1: call    sub_728D00
0x95CCC6: mov     ecx, [esp+300h+var_188]
0x95CCCD: cmp     ecx, edi
0x95CCCF: jz      loc_95CE99
0x95CCD5: mov     edx, [esp+300h+var_184]
0x95CCDC: movzx   eax, word ptr [esp+300h+var_2F0]
0x95CCE1: imul    eax, edx
0x95CCE4: mov     edi, [eax+ecx]
0x95CCE7: add     eax, ecx
0x95CCE9: mov     [esp+300h+var_1AC], edi
0x95CCF0: mov     edi, [eax+4]
0x95CCF3: mov     eax, [eax+8]
0x95CCF6: mov     [esp+300h+var_1A4], eax
0x95CCFD: movzx   eax, word ptr [esp+300h+var_2E8]
0x95CD02: imul    eax, edx
0x95CD05: add     eax, ecx
0x95CD07: mov     [esp+300h+var_1A8], edi
0x95CD0E: mov     edi, [eax]
0x95CD10: mov     [esp+300h+var_194], edi
0x95CD17: mov     edi, [eax+4]
0x95CD1A: mov     eax, [eax+8]
0x95CD1D: mov     [esp+300h+var_18C], eax
0x95CD24: movzx   eax, word ptr [esp+300h+var_2EC]
0x95CD29: imul    eax, edx
0x95CD2C: mov     edx, [eax+ecx+4]
0x95CD30: add     eax, ecx
0x95CD32: mov     ecx, [eax]
0x95CD34: mov     eax, [eax+8]
0x95CD37: mov     [esp+300h+var_22C], ecx
0x95CD3E: mov     [esp+300h+var_228], edx
0x95CD45: fld     [esp+300h+var_22C]
0x95CD4C: mov     [esp+300h+var_224], eax
0x95CD53: fld     [esp+300h+var_2C0]
0x95CD57: mov     [esp+300h+var_190], edi
0x95CD5E: fld     st
0x95CD60: fmulp   st(2), st
0x95CD62: fxch    st(1)
0x95CD64: fstp    [esp+300h+var_208]
0x95CD6B: fld     [esp+300h+var_228]
0x95CD72: fmul    st, st(1)
0x95CD74: fstp    [esp+300h+var_204]
0x95CD7B: fmul    [esp+300h+var_224]
0x95CD82: fstp    [esp+300h+var_200]
0x95CD89: fld     [esp+300h+var_194]
0x95CD90: fld     [esp+300h+var_2C8]
0x95CD94: fld     st
0x95CD96: fmulp   st(2), st
0x95CD98: fxch    st(1)
0x95CD9A: fstp    [esp+300h+var_1CC]
0x95CDA1: fld     [esp+300h+var_190]
0x95CDA8: fmul    st, st(1)
0x95CDAA: fstp    [esp+300h+var_1C8]
0x95CDB1: fmul    [esp+300h+var_18C]
0x95CDB8: fstp    [esp+300h+var_1C4]
0x95CDBF: fld     [esp+300h+var_1AC]
0x95CDC6: fld     [esp+300h+var_2DC]
0x95CDCA: fld     st
0x95CDCC: fmulp   st(2), st
0x95CDCE: fxch    st(1)
0x95CDD0: fstp    [esp+300h+var_17C]
0x95CDD7: fld     [esp+300h+var_1A8]
0x95CDDE: fmul    st, st(1)
0x95CDE0: fstp    [esp+300h+var_178]
0x95CDE7: fmul    [esp+300h+var_1A4]
0x95CDEE: fstp    [esp+300h+var_174]
0x95CDF5: fld     [esp+300h+var_17C]
0x95CDFC: fadd    [esp+300h+var_1CC]
0x95CE03: fstp    [esp+300h+var_214]
0x95CE0A: fld     [esp+300h+var_178]
0x95CE11: fadd    [esp+300h+var_1C8]
0x95CE18: fstp    [esp+300h+var_210]
0x95CE1F: fld     [esp+300h+var_174]
0x95CE26: fadd    [esp+300h+var_1C4]
0x95CE2D: fstp    [esp+300h+var_20C]
0x95CE34: fld     [esp+300h+var_214]
0x95CE3B: fadd    [esp+300h+var_208]
0x95CE42: fstp    [esp+300h+var_1F0]
0x95CE49: mov     ecx, [esp+300h+var_1F0]
0x95CE50: fld     [esp+300h+var_210]
0x95CE57: mov     [esp+300h+var_2D4], ecx
0x95CE5B: fadd    [esp+300h+var_204]
0x95CE62: fstp    [esp+300h+var_1EC]
0x95CE69: fld     [esp+300h+var_20C]
0x95CE70: fadd    [esp+300h+var_200]
0x95CE77: fstp    [esp+300h+var_1E8]
0x95CE7E: mov     edx, [esp+300h+var_1EC]
0x95CE85: mov     eax, [esp+300h+var_1E8]
0x95CE8C: mov     [esp+300h+var_2D0], edx
0x95CE90: mov     [esp+300h+var_2CC], eax
0x95CE94: jmp     loc_95D031
0x95CE99: cmp     byte ptr [ebp+2Eh], 0
0x95CE9D: jz      loc_95CF4C
0x95CEA3: mov     ecx, [esp+300h+arg_C]
0x95CEAA: mov     edx, [ecx+0B4h]
0x95CEB0: mov     edi, [edx+20h]
0x95CEB3: test    edi, edi
0x95CEB5: jz      loc_95CF4C
0x95CEBB: movzx   eax, word ptr [esp+300h+var_2EC]
0x95CEC0: fld     [esp+300h+var_2C0]
0x95CEC4: lea     eax, [eax+eax*2]
0x95CEC7: lea     ecx, [edi+eax*4]
0x95CECA: push    ecx; int
0x95CECB: push    ecx
0x95CECC: lea     edx, [esp+308h+var_BC]
0x95CED3: fstp    [esp+308h+var_308]; float
0x95CED6: push    edx; int
0x95CED7: call    sub_47DA10
0x95CEDC: fld     [esp+30Ch+var_2C8]
0x95CEE0: add     esp, 0Ch
0x95CEE3: push    eax
0x95CEE4: lea     eax, [esp+304h+var_A4]
0x95CEEB: push    eax
0x95CEEC: movzx   eax, word ptr [esp+308h+var_2E8]
0x95CEF1: lea     ecx, [eax+eax*2]
0x95CEF4: lea     edx, [edi+ecx*4]
0x95CEF7: push    edx; int
0x95CEF8: push    ecx
0x95CEF9: lea     eax, [esp+310h+var_D4]
0x95CF00: fstp    [esp+310h+var_310]; float
0x95CF03: push    eax; int
0x95CF04: call    sub_47DA10
0x95CF09: fld     [esp+314h+var_2DC]
0x95CF0D: add     esp, 0Ch
0x95CF10: push    eax
0x95CF11: movzx   eax, word ptr [esp+30Ch+var_2F0]
0x95CF16: lea     ecx, [esp+30Ch+var_8C]
0x95CF1D: push    ecx
0x95CF1E: lea     edx, [eax+eax*2]
0x95CF21: lea     eax, [edi+edx*4]
0x95CF24: push    eax; int
0x95CF25: push    ecx
0x95CF26: lea     ecx, [esp+318h+var_98]
0x95CF2D: fstp    [esp+318h+var_318]; float
0x95CF30: push    ecx; int
0x95CF31: call    sub_47DA10
0x95CF36: add     esp, 0Ch
0x95CF39: mov     ecx, eax
0x95CF3B: call    sub_47D9B0
0x95CF40: mov     ecx, eax
0x95CF42: call    sub_47D9B0
0x95CF47: jmp     loc_95D01D
0x95CF4C: fld     [esp+300h+var_268]
0x95CF53: fld     [esp+300h+var_250]
0x95CF5A: fld     st
0x95CF5C: fsubp   st(2), st
0x95CF5E: fxch    st(1)
0x95CF60: fstp    [esp+300h+var_2A0]
0x95CF64: mov     eax, [esp+300h+var_2A0]
0x95CF68: fld     [esp+300h+var_264]
0x95CF6F: mov     [esp+300h+var_220], eax
0x95CF76: fld     [esp+300h+var_24C]
0x95CF7D: fld     st
0x95CF7F: fsubp   st(2), st
0x95CF81: fxch    st(1)
0x95CF83: fstp    [esp+300h+var_29C]
0x95CF87: mov     ecx, [esp+300h+var_29C]
0x95CF8B: fld     [esp+300h+var_260]
0x95CF92: mov     [esp+300h+var_21C], ecx
0x95CF99: fld     [esp+300h+var_248]
0x95CFA0: fld     st
0x95CFA2: fsubp   st(2), st
0x95CFA4: fxch    st(1)
0x95CFA6: fstp    [esp+300h+var_298]
0x95CFAA: mov     edx, [esp+300h+var_298]
0x95CFAE: fld     [esp+300h+var_25C]
0x95CFB5: mov     [esp+300h+var_218], edx
0x95CFBC: fsubrp  st(3), st
0x95CFBE: fxch    st(2)
0x95CFC0: fstp    [esp+300h+var_28C]
0x95CFC4: mov     eax, [esp+300h+var_28C]
0x95CFC8: mov     [esp+300h+var_130], eax
0x95CFCF: fsubr   [esp+300h+var_258]
0x95CFD6: lea     eax, [esp+300h+var_130]
0x95CFDD: push    eax
0x95CFDE: fstp    [esp+304h+var_288]
0x95CFE2: mov     ecx, [esp+304h+var_288]
0x95CFE6: mov     [esp+304h+var_12C], ecx
0x95CFED: fsubr   [esp+304h+var_254]
0x95CFF4: lea     ecx, [esp+304h+var_B0]
0x95CFFB: push    ecx
0x95CFFC: lea     ecx, [esp+308h+var_220]
0x95D003: fstp    [esp+308h+var_284]
0x95D00A: mov     edx, [esp+308h+var_284]
0x95D011: mov     [esp+308h+var_128], edx
0x95D018: call    sub_498FE0
0x95D01D: mov     edx, [eax]
0x95D01F: mov     [esp+300h+var_2D4], edx
0x95D023: mov     ecx, [eax+4]
0x95D026: mov     [esp+300h+var_2D0], ecx
0x95D02A: mov     edx, [eax+8]
0x95D02D: mov     [esp+300h+var_2CC], edx
0x95D031: lea     ecx, [esp+300h+var_2D4]
0x95D035: call    sub_43F350
0x95D03A: fstp    st
0x95D03C: cmp     dword ptr [ebp+0Ch], 1
0x95D040: jnz     short loc_95D06A
0x95D042: lea     eax, [esp+300h+var_2D4]
0x95D046: push    eax
0x95D047: lea     ecx, [esp+304h+var_1C0]
0x95D04E: push    ecx
0x95D04F: mov     ecx, ebx
0x95D051: call    sub_7101F0
0x95D056: mov     edx, [eax]
0x95D058: mov     [esp+300h+var_2D4], edx
0x95D05C: mov     ecx, [eax+4]
0x95D05F: mov     [esp+300h+var_2D0], ecx
0x95D063: mov     edx, [eax+8]
0x95D066: mov     [esp+300h+var_2CC], edx
0x95D06A: mov     eax, [esp+300h+var_2D4]
0x95D06E: mov     ecx, [esp+300h+var_2D0]
0x95D072: mov     edx, [esp+300h+var_2CC]
0x95D076: mov     [esi+28h], eax
0x95D079: mov     [esi+2Ch], ecx
0x95D07C: jmp     short loc_95D095
0x95D07E: mov     eax, ds:0B3F9A8h
0x95D083: mov     [esi+28h], eax
0x95D086: mov     ecx, ds:0B3F9ACh
0x95D08C: mov     [esi+2Ch], ecx
0x95D08F: mov     edx, ds:0B3F9B0h
0x95D095: mov     [esi+30h], edx
0x95D098: cmp     byte ptr [ebp+2Fh], 0
0x95D09C: jz      loc_95D318
0x95D0A2: mov     ecx, [esp+300h+var_2C4]
0x95D0A6: lea     eax, [esp+300h+var_244]
0x95D0AD: xor     edi, edi
0x95D0AF: push    eax
0x95D0B0: mov     [esp+304h+var_244], edi
0x95D0B7: mov     [esp+304h+var_240], edi
0x95D0BE: mov     byte ptr [esp+304h+var_23C], 0
0x95D0C6: call    sub_728DB0
0x95D0CB: cmp     [esp+300h+var_244], edi
0x95D0D2: jz      loc_95D229
0x95D0D8: fldz
0x95D0DA: movzx   edx, word ptr [esp+300h+var_2F0]
0x95D0DF: fst     [esp+300h+var_16C]
0x95D0E6: lea     ecx, [esp+300h+var_16C]
0x95D0ED: fst     [esp+300h+var_168]
0x95D0F4: push    ecx
0x95D0F5: fst     [esp+304h+var_164]
0x95D0FC: push    edx
0x95D0FD: fst     [esp+308h+var_160]
0x95D104: lea     ecx, [esp+308h+var_244]
0x95D10B: fst     [esp+308h+var_14C]
0x95D112: fst     [esp+308h+var_148]
0x95D119: fst     [esp+308h+var_144]
0x95D120: fst     [esp+308h+var_140]
0x95D127: fst     [esp+308h+var_15C]
0x95D12E: fst     [esp+308h+var_158]
0x95D135: fst     [esp+308h+var_154]
0x95D13C: fstp    [esp+308h+var_150]
0x95D143: call    sub_4C1440
0x95D148: movzx   ecx, word ptr [esp+300h+var_2E8]
0x95D14D: lea     eax, [esp+300h+var_14C]
0x95D154: push    eax
0x95D155: push    ecx
0x95D156: lea     ecx, [esp+308h+var_244]
0x95D15D: call    sub_4C1440
0x95D162: movzx   eax, word ptr [esp+300h+var_2EC]
0x95D167: lea     edx, [esp+300h+var_15C]
0x95D16E: push    edx
0x95D16F: push    eax
0x95D170: lea     ecx, [esp+308h+var_244]
0x95D177: call    sub_4C1440
0x95D17C: lea     ecx, [esp+300h+var_15C]
0x95D183: fld     [esp+300h+var_2C0]
0x95D187: push    ecx; int
0x95D188: push    ecx
0x95D189: lea     edx, [esp+308h+var_80]
0x95D190: fstp    [esp+308h+var_308]; float
0x95D193: push    edx; int
0x95D194: call    sub_4BFBD0
0x95D199: fld     [esp+30Ch+var_2C8]
0x95D19D: add     esp, 0Ch
0x95D1A0: push    eax
0x95D1A1: lea     eax, [esp+304h+var_FC]
0x95D1A8: push    eax
0x95D1A9: lea     ecx, [esp+308h+var_14C]
0x95D1B0: push    ecx; int
0x95D1B1: push    ecx
0x95D1B2: lea     edx, [esp+310h+var_60]
0x95D1B9: fstp    [esp+310h+var_310]; float
0x95D1BC: push    edx; int
0x95D1BD: call    sub_4BFBD0
0x95D1C2: fld     [esp+314h+var_2DC]
0x95D1C6: add     esp, 0Ch
0x95D1C9: push    eax
0x95D1CA: lea     eax, [esp+30Ch+var_20]
0x95D1D1: push    eax
0x95D1D2: lea     ecx, [esp+310h+var_16C]
0x95D1D9: push    ecx; int
0x95D1DA: push    ecx
0x95D1DB: lea     edx, [esp+318h+var_40]
0x95D1E2: fstp    [esp+318h+var_318]; float
0x95D1E5: push    edx; int
0x95D1E6: call    sub_4BFBD0
0x95D1EB: add     esp, 0Ch
0x95D1EE: mov     ecx, eax
0x95D1F0: call    sub_4BFB30
0x95D1F5: mov     ecx, eax
0x95D1F7: call    sub_4BFB30
0x95D1FC: mov     eax, [esp+300h+var_FC]
0x95D203: mov     ecx, [esp+300h+var_F8]
0x95D20A: mov     edx, [esp+300h+var_F4]
0x95D211: mov     [esi+34h], eax
0x95D214: mov     eax, [esp+300h+var_F0]
0x95D21B: mov     [esi+38h], ecx
0x95D21E: mov     [esi+3Ch], edx
0x95D221: mov     [esi+40h], eax
0x95D224: jmp     loc_95D33B
0x95D229: mov     ecx, [esp+300h+arg_C]
0x95D230: mov     edx, [ecx+0B4h]
0x95D236: mov     edi, [edx+24h]
0x95D239: test    edi, edi
0x95D23B: jz      loc_95D2F4
0x95D241: movzx   eax, word ptr [esp+300h+var_2EC]
0x95D246: fld     [esp+300h+var_2C0]
0x95D24A: shl     eax, 4
0x95D24D: add     eax, edi
0x95D24F: push    eax; int
0x95D250: push    ecx
0x95D251: lea     ecx, [esp+308h+var_70]
0x95D258: fstp    [esp+308h+var_308]; float
0x95D25B: push    ecx; int
0x95D25C: call    sub_4BFBD0
0x95D261: fld     [esp+30Ch+var_2C8]
0x95D265: add     esp, 0Ch
0x95D268: push    eax
0x95D269: movzx   eax, word ptr [esp+304h+var_2E8]
0x95D26E: lea     edx, [esp+304h+var_10C]
0x95D275: push    edx
0x95D276: shl     eax, 4
0x95D279: add     eax, edi
0x95D27B: push    eax; int
0x95D27C: push    ecx
0x95D27D: lea     ecx, [esp+310h+var_50]
0x95D284: fstp    [esp+310h+var_310]; float
0x95D287: push    ecx; int
0x95D288: call    sub_4BFBD0
0x95D28D: fld     [esp+314h+var_2DC]
0x95D291: add     esp, 0Ch
0x95D294: push    eax
0x95D295: movzx   eax, word ptr [esp+30Ch+var_2F0]
0x95D29A: lea     edx, [esp+30Ch+var_30]
0x95D2A1: push    edx
0x95D2A2: shl     eax, 4
0x95D2A5: add     eax, edi
0x95D2A7: push    eax; int
0x95D2A8: push    ecx
0x95D2A9: lea     ecx, [esp+318h+var_10]
0x95D2B0: fstp    [esp+318h+var_318]; float
0x95D2B3: push    ecx; int
0x95D2B4: call    sub_4BFBD0
0x95D2B9: add     esp, 0Ch
0x95D2BC: mov     ecx, eax
0x95D2BE: call    sub_4BFB30
0x95D2C3: mov     ecx, eax
0x95D2C5: call    sub_4BFB30
0x95D2CA: mov     edx, [esp+300h+var_10C]
0x95D2D1: mov     eax, [esp+300h+var_108]
0x95D2D8: mov     ecx, [esp+300h+var_104]
0x95D2DF: mov     [esi+34h], edx
0x95D2E2: mov     edx, [esp+300h+var_100]
0x95D2E9: mov     [esi+38h], eax
0x95D2EC: mov     [esi+3Ch], ecx
0x95D2EF: mov     [esi+40h], edx
0x95D2F2: jmp     short loc_95D33B
0x95D2F4: mov     eax, ds:0B25AE0h
0x95D2F9: mov     [esi+34h], eax
0x95D2FC: mov     ecx, ds:0B25AE4h
0x95D302: mov     [esi+38h], ecx
0x95D305: mov     edx, ds:0B25AE8h
0x95D30B: mov     [esi+3Ch], edx
0x95D30E: mov     eax, ds:0B25AECh
0x95D313: mov     [esi+40h], eax
0x95D316: jmp     short loc_95D33B
0x95D318: mov     ecx, ds:0B25AE0h
0x95D31E: mov     [esi+34h], ecx
0x95D321: mov     edx, ds:0B25AE4h
0x95D327: mov     [esi+38h], edx
0x95D32A: mov     eax, ds:0B25AE8h
0x95D32F: mov     [esi+3Ch], eax
0x95D332: mov     ecx, ds:0B25AECh
0x95D338: mov     [esi+40h], ecx
0x95D33B: lea     edx, [esp+300h+var_2DC]
0x95D33F: push    edx
0x95D340: lea     ecx, [ebp+18h]
0x95D343: mov     [esp+304h+var_2DC], esi
0x95D347: mov     [ebp+28h], esi
0x95D34A: call    sub_4BACA0
0x95D34F: cmp     dword ptr [ebp+0], 1
0x95D353: jnz     short loc_95D35B
0x95D355: cmp     dword ptr [ebp+4], 1
0x95D359: jz      short loc_95D39D
0x95D35B: mov     esi, [esp+300h+arg_C]
0x95D362: mov     edi, [esp+300h+var_2E0]
0x95D366: mov     eax, [esp+300h+var_2D8]
0x95D36A: add     eax, 1
0x95D36D: cmp     ax, word ptr [esp+300h+var_2BC]
0x95D372: mov     [esp+300h+var_2D8], eax
0x95D376: jb      loc_95C750
0x95D37C: mov     ebp, [esp+300h+var_2C4]
0x95D380: cmp     byte ptr [esp+300h+var_2E4+2], 0
0x95D385: jz      short loc_95D38E
0x95D387: mov     ecx, ebp
0x95D389: call    sub_728B20
0x95D38E: mov     al, byte ptr [esp+300h+var_2E4+3]
0x95D392: pop     edi
0x95D393: pop     esi
0x95D394: pop     ebp
0x95D395: pop     ebx
0x95D396: add     esp, 2F0h
0x95D39C: retn
0x95D39D: cmp     byte ptr [esp+300h+var_2E4+2], 0
0x95D3A2: jz      loc_95D52B
0x95D3A8: mov     ecx, [esp+300h+var_2C4]
0x95D3AC: call    sub_728B20
0x95D3B1: pop     edi
0x95D3B2: pop     esi
0x95D3B3: pop     ebp
0x95D3B4: mov     al, 1
0x95D3B6: pop     ebx
0x95D3B7: add     esp, 2F0h
0x95D3BD: retn
0x95D3BE: mov     eax, [esi+20h]
0x95D3C1: mov     edi, [esp+300h+arg_0]
0x95D3C8: mov     ecx, [esi+24h]
0x95D3CB: mov     edx, [esi+28h]
0x95D3CE: mov     ebp, [esp+300h+arg_4]
0x95D3D5: mov     [esp+300h+var_1C0], eax
0x95D3DC: fld     [esp+300h+var_1C0]
0x95D3E3: fsub    dword ptr [edi]
0x95D3E5: mov     [esp+300h+var_1BC], ecx
0x95D3EC: mov     [esp+300h+var_1B8], edx
0x95D3F3: mov     eax, [esi+2Ch]
0x95D3F6: fstp    [esp+300h+var_2D4]
0x95D3FA: mov     [esp+300h+var_1B4], eax
0x95D401: fld     [esp+300h+var_1BC]
0x95D408: fsub    dword ptr [edi+4]
0x95D40B: fstp    [esp+300h+var_2D0]
0x95D40F: fld     [esp+300h+var_1B8]
0x95D416: fsub    dword ptr [edi+8]
0x95D419: fstp    [esp+300h+var_2CC]
0x95D41D: fld     [esp+300h+var_2D0]
0x95D421: fmul    dword ptr [ebp+4]
0x95D424: fld     dword ptr [ebp+0]
0x95D427: fmul    [esp+300h+var_2D4]
0x95D42B: faddp   st(1), st
0x95D42D: fld     [esp+300h+var_2CC]
0x95D431: fmul    dword ptr [ebp+8]
0x95D434: faddp   st(1), st
0x95D436: fstp    [esp+300h+var_2E0]
0x95D43A: fld     [esp+300h+var_2E0]
0x95D43E: fcomp   dword ptr ds:0A2FAA8h
0x95D444: fnstsw  ax
0x95D446: test    ah, 5
0x95D449: jp      short loc_95D458
0x95D44B: pop     edi
0x95D44C: pop     esi
0x95D44D: pop     ebp
0x95D44E: xor     al, al
0x95D450: pop     ebx
0x95D451: add     esp, 2F0h
0x95D457: retn
0x95D458: push    44h ; 'D'; Size
0x95D45A: call    FormHeapAlloc
0x95D45F: add     esp, 4
0x95D462: test    eax, eax
0x95D464: jz      short loc_95D472
0x95D466: push    esi
0x95D467: mov     ecx, eax
0x95D469: call    sub_95A2D0
0x95D46E: mov     esi, eax
0x95D470: jmp     short loc_95D474
0x95D472: xor     esi, esi
0x95D474: lea     ecx, [esp+300h+var_2E0]
0x95D478: push    ecx
0x95D479: lea     ecx, [ebx+18h]
0x95D47C: mov     [esp+304h+var_2E0], esi
0x95D480: mov     [ebx+28h], esi
0x95D483: call    sub_4BACA0
0x95D488: fld     [esp+300h+var_2D0]
0x95D48C: fld     [esp+300h+var_2D4]
0x95D490: fld     [esp+300h+var_2CC]
0x95D494: fld     st(1)
0x95D496: fmulp   st(2), st
0x95D498: fld     st(2)
0x95D49A: fmulp   st(3), st
0x95D49C: fxch    st(1)
0x95D49E: faddp   st(2), st
0x95D4A0: fmul    st, st
0x95D4A2: faddp   st(1), st
0x95D4A4: fstp    [esp+300h+var_2E0]
0x95D4A8: fld     [esp+300h+var_2E0]
0x95D4AC: call    __CIsqrt
0x95D4B1: fstp    [esp+300h+var_2E0]
0x95D4B5: fld     [esp+300h+var_2E0]
0x95D4B9: fst     dword ptr [esi+14h]
0x95D4BC: cmp     dword ptr [ebx+8], 1
0x95D4C0: jnz     short loc_95D529
0x95D4C2: fstp    [esp+300h+var_2E0]
0x95D4C6: fld     dword ptr [ebp+0]
0x95D4C9: fld     [esp+300h+var_2E0]
0x95D4CD: fld     st
0x95D4CF: fmulp   st(2), st
0x95D4D1: fxch    st(1)
0x95D4D3: fstp    [esp+300h+var_28C]
0x95D4D7: fld     st
0x95D4D9: fmul    dword ptr [ebp+4]
0x95D4DC: fstp    [esp+300h+var_288]
0x95D4E0: fmul    dword ptr [ebp+8]
0x95D4E3: fstp    [esp+300h+var_284]
0x95D4E7: fld     dword ptr [edi]
0x95D4E9: fadd    [esp+300h+var_28C]
0x95D4ED: fstp    [esp+300h+var_2A0]
0x95D4F1: mov     edx, [esp+300h+var_2A0]
0x95D4F5: fld     dword ptr [edi+4]
0x95D4F8: fadd    [esp+300h+var_288]
0x95D4FC: fstp    [esp+300h+var_29C]
0x95D500: mov     eax, [esp+300h+var_29C]
0x95D504: fld     [esp+300h+var_284]
0x95D508: fadd    dword ptr [edi+8]
0x95D50B: mov     [esi+8], edx
0x95D50E: mov     [esi+0Ch], eax
0x95D511: pop     edi
0x95D512: fstp    [esp+2FCh+var_298]
0x95D516: mov     ecx, [esp+2FCh+var_298]
0x95D51A: mov     [esi+10h], ecx
0x95D51D: pop     esi
0x95D51E: pop     ebp
0x95D51F: mov     al, 1
0x95D521: pop     ebx
0x95D522: add     esp, 2F0h
0x95D528: retn
0x95D529: fstp    st
0x95D52B: pop     edi
0x95D52C: pop     esi
0x95D52D: pop     ebp
0x95D52E: mov     al, 1
0x95D530: pop     ebx
0x95D531: add     esp, 2F0h
0x95D537: retn
