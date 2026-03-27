0x49E3FC: fstp    st(5); jumptable 0049E3A3 default case
0x49E3FE: fstp    st(3)
0x49E400: fstp    st(1)
0x49E402: fstp    st
0x49E404: fstp    st
0x49E406: fstp    st
0x49E408: fld     [esp+arg_10]
0x49E40C: push    1; float
0x49E40E: push    1; int
0x49E410: push    1; int
0x49E412: push    100h; int
0x49E417: sub     esp, 8
0x49E41A: fstp    [esp+18h+var_14]; float
0x49E41E: mov     ecx, ebp
0x49E420: fld     [esp+18h+arg_14]
0x49E424: fstp    [esp+18h+var_18]; float
0x49E427: call    sub_49D2A0
0x49E42C: push    eax
0x49E42D: mov     ecx, ebp
0x49E42F: call    sub_498F70
0x49E434: fld     [esp+arg_18]
0x49E438: mov     esi, eax
0x49E43A: fstp    [esp+arg_20]
0x49E43E: fld     [esp+arg_1C]
0x49E442: mov     eax, [esp+arg_20]
0x49E446: mov     [esi+54h], eax
0x49E449: fstp    [esp+arg_24]
0x49E44D: mov     ecx, [esp+arg_24]
0x49E451: mov     [esi+58h], ecx
0x49E454: mov     [esi+5Ch], ebx
0x49E457: mov     ecx, ds:0B35234h
0x49E45D: mov     edx, [ecx]
0x49E45F: mov     eax, [edx+84h]
0x49E465: push    1
0x49E467: push    esi
0x49E468: call    eax
0x49E46A: push    1
0x49E46C: push    0
0x49E46E: push    11h
0x49E470: push    esi
0x49E471: call    sub_7B8940
0x49E476: add     esp, 10h
0x49E479: push    4
0x49E47B: mov     ecx, esi
0x49E47D: call    NiNode_GetNiPropertyByID
0x49E482: add     edi, 1
0x49E485: cmp     edi, 4
0x49E488: mov     byte ptr [eax+71h], 1
0x49E48C: jl      loc_49E370
0x49E492: cmp     byte ptr ds:0B07050h, 0
0x49E499: jz      short loc_49E4C2
0x49E49B: cmp     byte ptr ds:0B42F3Eh, 0
0x49E4A2: jz      short loc_49E4C2
0x49E4A4: cmp     dword ptr ds:0B42F48h, 2
0x49E4AB: jl      short loc_49E4C2
0x49E4AD: mov     ecx, ds:0B35234h
0x49E4B3: push    1
0x49E4B5: push    0
0x49E4B7: push    11h
0x49E4B9: push    ecx
0x49E4BA: call    sub_7B8940
0x49E4BF: add     esp, 10h
0x49E4C2: call    sub_499E40
0x49E4C7: mov     eax, ds:0B35234h
0x49E4CC: test    eax, eax
0x49E4CE: jz      short loc_49E4D6
0x49E4D0: and     word ptr [eax+18h], 0FFFEh
0x49E4D6: mov     ecx, [esp+8+arg_24]
0x49E4DA: mov     large fs:0, ecx
0x49E4E1: pop     ecx
0x49E4E2: pop     edi
0x49E4E3: pop     esi
0x49E4E4: pop     ebp
0x49E4E5: pop     ebx
0x49E4E6: add     esp, 28h
0x49E4E9: retn
