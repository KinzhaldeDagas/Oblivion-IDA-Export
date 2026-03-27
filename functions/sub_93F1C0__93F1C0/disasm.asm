0x93F1C0: push    ebp
0x93F1C1: mov     ebp, esp
0x93F1C3: and     esp, 0FFFFFFF0h
0x93F1C6: sub     esp, 54h
0x93F1C9: mov     eax, [ebp+arg_4]
0x93F1CC: push    ebx
0x93F1CD: mov     ebx, [eax]
0x93F1CF: mov     eax, [eax+8]
0x93F1D2: push    esi
0x93F1D3: mov     esi, [ebp+arg_0]
0x93F1D6: mov     ecx, [esi+8]
0x93F1D9: push    edi
0x93F1DA: mov     edi, [esi]
0x93F1DC: push    eax
0x93F1DD: push    ecx
0x93F1DE: lea     ecx, [esp+68h+var_40]
0x93F1E2: call    sub_8B1FF0
0x93F1E7: mov     ecx, [ebp+arg_C]
0x93F1EA: lea     edx, [esp+60h+var_50]
0x93F1EE: push    edx
0x93F1EF: lea     eax, [esp+64h+var_40]
0x93F1F3: push    eax
0x93F1F4: push    ebx
0x93F1F5: push    edi
0x93F1F6: call    sub_93C690
0x93F1FB: fld     dword ptr [esp+60h+var_50+0Ch]
0x93F1FF: mov     eax, [esi+8]
0x93F202: movaps  xmm0, [esp+60h+var_50]
0x93F207: movaps  xmm2, xmmword ptr [eax+20h]
0x93F20B: movaps  xmm3, xmmword ptr [eax+10h]
0x93F20F: movaps  xmm1, xmm0
0x93F212: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x93F216: mulps   xmm2, xmm1
0x93F219: movaps  xmm1, xmm0
0x93F21C: shufps  xmm1, xmm0, 55h ; 'U'
0x93F220: mulps   xmm3, xmm1
0x93F223: movaps  xmm1, xmm0
0x93F226: shufps  xmm1, xmm0, 0
0x93F22A: movaps  xmm0, xmmword ptr [eax]
0x93F22D: mov     eax, [ebp+arg_10]
0x93F230: mulps   xmm0, xmm1
0x93F233: addps   xmm0, xmm3
0x93F236: addps   xmm0, xmm2
0x93F239: movaps  xmmword ptr [eax], xmm0
0x93F23C: fsub    dword ptr [edi+0Ch]
0x93F23F: pop     edi
0x93F240: pop     esi
0x93F241: fsub    dword ptr [ebx+0Ch]
0x93F244: pop     ebx
0x93F245: fstp    dword ptr [eax+0Ch]
0x93F248: mov     esp, ebp
0x93F24A: pop     ebp
0x93F24B: retn
