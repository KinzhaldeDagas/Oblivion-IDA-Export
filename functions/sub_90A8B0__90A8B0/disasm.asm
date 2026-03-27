0x90A8B0: sub     esp, 10h
0x90A8B3: mov     eax, [esp+10h+arg_C]
0x90A8B7: push    ebx
0x90A8B8: mov     ebx, [esp+14h+arg_8]
0x90A8BC: push    ebp
0x90A8BD: push    esi
0x90A8BE: mov     esi, ecx
0x90A8C0: mov     [esi+8], eax
0x90A8C3: mov     eax, [esp+1Ch+arg_0]
0x90A8C7: mov     word ptr [esi+6], 1
0x90A8CD: mov     dword ptr [esi], offset off_A9BF7C
0x90A8D3: mov     ecx, [eax+8]
0x90A8D6: mov     edx, [eax]
0x90A8D8: mov     ebp, [ebx]
0x90A8DA: mov     [esp+1Ch+var_4], eax
0x90A8DE: mov     [esp+1Ch+var_8], ecx
0x90A8E2: mov     ecx, [edx+0Ch]
0x90A8E5: mov     eax, [eax+4]
0x90A8E8: mov     [esp+1Ch+var_C], eax
0x90A8EC: mov     [esp+1Ch+var_10], ecx
0x90A8F0: mov     edx, [ecx]
0x90A8F2: push    edi
0x90A8F3: call    dword ptr [edx+8]
0x90A8F6: mov     edi, eax
0x90A8F8: mov     eax, [esp+20h+arg_4]
0x90A8FC: mov     ecx, [eax]
0x90A8FE: mov     edx, [ecx]
0x90A900: call    dword ptr [edx+8]
0x90A903: mov     cl, [ebx+0Ch]
0x90A906: test    cl, cl
0x90A908: lea     ecx, [ebp+590h]
0x90A90E: jnz     short loc_90A916
0x90A910: lea     ecx, [ebp+190h]
0x90A916: mov     edx, [esp+20h+arg_4]
0x90A91A: shl     edi, 5
0x90A91D: add     edi, ecx
0x90A91F: movzx   eax, byte ptr [edi+eax]
0x90A923: mov     ecx, [esp+20h+arg_C]
0x90A927: push    ecx
0x90A928: lea     eax, [eax+eax*4]
0x90A92B: mov     ebp, [ebp+eax*4+990h]
0x90A932: push    ebx
0x90A933: push    edx
0x90A934: lea     eax, [esp+2Ch+var_10]
0x90A938: push    eax
0x90A939: call    ebp
0x90A93B: add     esp, 10h
0x90A93E: pop     edi
0x90A93F: mov     [esi+0Ch], eax
0x90A942: mov     dword ptr [esi+10h], 0
0x90A949: mov     eax, esi
0x90A94B: pop     esi
0x90A94C: pop     ebp
0x90A94D: pop     ebx
0x90A94E: add     esp, 10h
0x90A951: retn    10h
