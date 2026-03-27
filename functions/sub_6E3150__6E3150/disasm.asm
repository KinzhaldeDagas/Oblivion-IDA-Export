0x6E3150: push    esi
0x6E3151: mov     esi, ecx
0x6E3153: mov     al, [esi+8]
0x6E3156: shr     al, 5
0x6E3159: test    al, 1
0x6E315B: jz      short loc_6E3168
0x6E315D: fld     dword ptr ds:0A7A164h
0x6E3163: fstp    dword ptr [esi+28h]
0x6E3166: jmp     short loc_6E318E
0x6E3168: fld     [esp+4+arg_0]
0x6E316C: push    ecx
0x6E316D: fstp    [esp+8+var_8]; float
0x6E3170: call    sub_6C36B0
0x6E3175: test    al, al
0x6E3177: jz      short loc_6E318E
0x6E3179: mov     ecx, [esi+3Ch]
0x6E317C: test    ecx, ecx
0x6E317E: jz      short loc_6E31BE
0x6E3180: mov     edx, [ecx]
0x6E3182: mov     eax, [edx+94h]
0x6E3188: call    eax
0x6E318A: test    al, al
0x6E318C: jz      short loc_6E31BE
0x6E318E: mov     ecx, [esi+3Ch]
0x6E3191: test    ecx, ecx
0x6E3193: jz      short loc_6E31BE
0x6E3195: mov     edx, [ecx]
0x6E3197: fld     dword ptr [esi+28h]
0x6E319A: mov     edx, [edx+5Ch]
0x6E319D: lea     eax, [esp+4+arg_0]
0x6E31A1: push    eax
0x6E31A2: mov     eax, [esi+30h]
0x6E31A5: push    eax
0x6E31A6: push    ecx
0x6E31A7: fstp    [esp+10h+var_10]
0x6E31AA: call    edx
0x6E31AC: test    al, al
0x6E31AE: jz      short loc_6E31BE
0x6E31B0: mov     esi, [esi+44h]
0x6E31B3: test    esi, esi
0x6E31B5: jz      short loc_6E31BE
0x6E31B7: fld     [esp+4+arg_0]
0x6E31BB: fstp    dword ptr [esi+0Ch]
0x6E31BE: pop     esi
0x6E31BF: retn    4
