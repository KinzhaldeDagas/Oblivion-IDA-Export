0x6948B0: push    ecx
0x6948B1: push    ebx
0x6948B2: mov     ebx, ecx
0x6948B4: mov     ecx, [ebx+20h]; this
0x6948B7: test    ecx, ecx
0x6948B9: push    edi
0x6948BA: jz      short loc_6948C5
0x6948BC: call    MagicTarget_GetParentActor
0x6948C1: mov     edi, eax
0x6948C3: jmp     short loc_6948C7
0x6948C5: xor     edi, edi
0x6948C7: cmp     dword ptr [ebx+38h], 0
0x6948CB: jz      loc_69497B
0x6948D1: push    0
0x6948D3: call    GetShadowSceneNode
0x6948D8: add     esp, 4
0x6948DB: test    eax, eax
0x6948DD: jz      short loc_6948EA
0x6948DF: mov     ecx, [ebx+38h]
0x6948E2: push    ecx
0x6948E3: mov     ecx, eax
0x6948E5: call    sub_7C7DC0
0x6948EA: test    edi, edi
0x6948EC: push    ebp
0x6948ED: mov     ebp, ds:0A2807Ch
0x6948F3: push    esi
0x6948F4: jz      short loc_694946
0x6948F6: mov     edx, [edi]
0x6948F8: mov     eax, [edx+154h]
0x6948FE: mov     ecx, edi
0x694900: call    eax
0x694902: test    eax, eax
0x694904: jz      short loc_69493D
0x694906: mov     ecx, [ebx+38h]
0x694909: mov     edx, [eax]
0x69490B: mov     edx, [edx+88h]
0x694911: push    ecx
0x694912: lea     ecx, [esp+18h+var_4]
0x694916: push    ecx
0x694917: mov     ecx, eax
0x694919: call    edx
0x69491B: mov     eax, dword ptr [esp+14h+var_4]
0x69491F: test    eax, eax
0x694921: jz      short loc_69493D
0x694923: mov     esi, eax
0x694925: add     eax, 4
0x694928: push    eax; lpAddend
0x694929: call    ebp ; InterlockedDecrement
0x69492B: test    eax, eax
0x69492D: jnz     short loc_69493D
0x69492F: test    esi, esi
0x694931: jz      short loc_69493D
0x694933: mov     eax, [esi]
0x694935: mov     edx, [eax]
0x694937: push    1
0x694939: mov     ecx, esi
0x69493B: call    edx
0x69493D: push    1
0x69493F: mov     ecx, edi
0x694941: call    sub_4D8190
0x694946: mov     esi, [ebx+38h]
0x694949: xor     edi, edi
0x69494B: cmp     esi, edi
0x69494D: jz      short loc_69496A
0x69494F: lea     eax, [esi+4]
0x694952: push    eax; lpAddend
0x694953: call    ebp ; InterlockedDecrement
0x694955: test    eax, eax
0x694957: jnz     short loc_694967
0x694959: cmp     esi, edi
0x69495B: jz      short loc_694967
0x69495D: mov     edx, [esi]
0x69495F: mov     eax, [edx]
0x694961: push    1
0x694963: mov     ecx, esi
0x694965: call    eax
0x694967: mov     [ebx+38h], edi
0x69496A: sub     dword ptr ds:0B3C0B4h, 1
0x694971: pop     esi
0x694972: pop     ebp
0x694973: jns     short loc_69497B
0x694975: mov     ds:0B3C0B4h, edi
0x69497B: pop     edi
0x69497C: pop     ebx
0x69497D: pop     ecx
0x69497E: retn
