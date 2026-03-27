0x8D3850: sub     esp, 10h
0x8D3853: fld     [esp+10h+arg_C]
0x8D3857: push    ebx
0x8D3858: mov     ebx, [esp+14h+arg_8]
0x8D385C: fsub    dword ptr [ebx+10h]
0x8D385F: push    edi
0x8D3860: lea     edi, [ebx+10h]
0x8D3863: mov     eax, edi
0x8D3865: mov     ecx, [eax]
0x8D3867: fcom    dword ptr ds:0A2FAA8h
0x8D386D: mov     edx, [eax+4]
0x8D3870: mov     [esp+18h+var_10], ecx
0x8D3874: mov     ecx, [eax+8]
0x8D3877: mov     [esp+18h+var_C], edx
0x8D387B: mov     edx, [eax+0Ch]
0x8D387E: fst     dword ptr [ebx+18h]
0x8D3881: mov     eax, [esp+18h+arg_C]
0x8D3885: mov     [ebx+14h], eax
0x8D3888: fnstsw  ax
0x8D388A: mov     [esp+18h+var_8], ecx
0x8D388E: test    ah, 41h
0x8D3891: mov     [esp+18h+var_4], edx
0x8D3895: jnz     short loc_8D38A4
0x8D3897: fld     dword ptr ds:0A2F948h
0x8D389D: fdiv    st, st(1)
0x8D389F: fstp    dword ptr [ebx+1Ch]
0x8D38A2: jmp     short loc_8D38AB
0x8D38A4: mov     dword ptr [ebx+1Ch], 0
0x8D38AB: mov     ecx, [esp+18h+arg_0]
0x8D38AF: fstp    st
0x8D38B1: mov     edx, [ecx+3Ch]
0x8D38B4: xor     eax, eax
0x8D38B6: test    edx, edx
0x8D38B8: mov     [esp+18h+arg_8], eax
0x8D38BC: jle     loc_8D3956
0x8D38C2: push    ebp
0x8D38C3: push    esi
0x8D38C4: mov     ecx, [ecx+38h]
0x8D38C7: mov     edx, [ecx+eax*8]
0x8D38CA: lea     esi, [ecx+eax*8]
0x8D38CD: movzx   eax, byte ptr [edx+8]
0x8D38D1: cmp     [esp+20h+arg_4], eax
0x8D38D5: jg      short loc_8D393C
0x8D38D7: mov     ecx, [esi+4]
0x8D38DA: mov     eax, [ecx+10h]
0x8D38DD: add     eax, ecx
0x8D38DF: mov     cl, [eax+91h]
0x8D38E5: test    cl, cl
0x8D38E7: jnz     short loc_8D3930
0x8D38E9: movzx   edx, word ptr [eax+8Ch]
0x8D38F0: mov     ebp, [esp+20h+arg_10]
0x8D38F4: mov     ebp, [ebp+0]
0x8D38F7: cmp     byte ptr [edx+ebp], 8
0x8D38FB: jz      short loc_8D393C
0x8D38FD: test    cl, cl
0x8D38FF: jnz     short loc_8D3930
0x8D3901: movzx   ecx, word ptr [eax+8Ch]
0x8D3908: mov     edx, [esp+20h+arg_10]
0x8D390C: mov     edx, [edx]
0x8D390E: add     ecx, edx
0x8D3910: cmp     byte ptr [ecx], 0
0x8D3913: jnz     short loc_8D3930
0x8D3915: mov     byte ptr [ecx], 1
0x8D3918: mov     eax, [eax+50h]
0x8D391B: mov     ecx, [esp+20h+arg_C]
0x8D391F: add     eax, 10h
0x8D3922: push    eax; int
0x8D3923: push    ecx; float
0x8D3924: add     eax, 40h ; '@'
0x8D3927: push    eax; int
0x8D3928: call    sub_8DD150
0x8D392D: add     esp, 0Ch
0x8D3930: mov     edx, [esi]
0x8D3932: push    ebx
0x8D3933: push    edx
0x8D3934: call    sub_8D30B0
0x8D3939: add     esp, 8
0x8D393C: mov     eax, [esp+20h+arg_8]
0x8D3940: mov     ecx, [esp+20h+arg_0]
0x8D3944: mov     edx, [ecx+3Ch]
0x8D3947: inc     eax
0x8D3948: cmp     eax, edx
0x8D394A: mov     [esp+20h+arg_8], eax
0x8D394E: jl      loc_8D38C4
0x8D3954: pop     esi
0x8D3955: pop     ebp
0x8D3956: mov     eax, [esp+18h+var_10]
0x8D395A: mov     ecx, [esp+18h+var_C]
0x8D395E: mov     edx, [esp+18h+var_8]
0x8D3962: mov     [edi], eax
0x8D3964: mov     eax, [esp+18h+var_4]
0x8D3968: mov     [edi+4], ecx
0x8D396B: mov     [edi+8], edx
0x8D396E: mov     [edi+0Ch], eax
0x8D3971: pop     edi
0x8D3972: pop     ebx
0x8D3973: add     esp, 10h
0x8D3976: retn
