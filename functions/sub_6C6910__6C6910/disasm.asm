0x6C6910: push    0FFFFFFFFh
0x6C6912: push    offset SEH_6C6910
0x6C6917: mov     eax, large fs:0
0x6C691D: push    eax
0x6C691E: sub     esp, 8
0x6C6921: push    ebx
0x6C6922: push    ebp
0x6C6923: push    esi
0x6C6924: push    edi
0x6C6925: mov     eax, ds:0B30AACh
0x6C692A: xor     eax, esp
0x6C692C: push    eax
0x6C692D: lea     eax, [esp+28h+var_C]
0x6C6931: mov     large fs:0, eax
0x6C6937: mov     edi, ecx
0x6C6939: mov     ecx, [esp+28h+arg_0]
0x6C693D: push    offset dword_B3CD7C
0x6C6942: call    sub_700010
0x6C6947: mov     esi, eax
0x6C6949: xor     ebx, ebx
0x6C694B: cmp     esi, ebx
0x6C694D: mov     [esp+28h+arg_0], esi
0x6C6951: jz      short loc_6C695D
0x6C6953: lea     eax, [esi+4]
0x6C6956: push    eax; lpAddend
0x6C6957: call    dword ptr ds:0A28078h
0x6C695D: cmp     esi, ebx
0x6C695F: mov     [esp+28h+var_4], ebx
0x6C6963: jz      loc_6C69E7
0x6C6969: cmp     [edi+0Ch], ebx
0x6C696C: mov     ecx, [edi+40h]
0x6C696F: mov     ebp, [ecx+7Ch]
0x6C6972: mov     [esp+28h+var_10], ebp
0x6C6976: mov     [esp+28h+var_14], ebx
0x6C697A: jbe     short loc_6C69E7
0x6C697C: jmp     short loc_6C6984
0x6C697E: align 10h
0x6C6980: mov     ebp, [esp+28h+var_10]
0x6C6984: mov     eax, [edi+18h]
0x6C6987: movzx   ecx, word ptr [eax+ebx+4]
0x6C698C: add     eax, ebx
0x6C698E: cmp     cx, 0FFFFh
0x6C6993: jz      short loc_6C69A1
0x6C6995: mov     eax, [eax]
0x6C6997: mov     edx, [eax+8]
0x6C699A: movzx   eax, cx
0x6C699D: add     eax, edx
0x6C699F: jmp     short loc_6C69A3
0x6C69A1: xor     eax, eax
0x6C69A3: mov     edx, [ebp+0]
0x6C69A6: push    eax
0x6C69A7: mov     eax, [edx+4Ch]
0x6C69AA: mov     ecx, ebp
0x6C69AC: call    eax
0x6C69AE: test    eax, eax
0x6C69B0: jz      short loc_6C69D4
0x6C69B2: movzx   edx, word ptr [esi+44h]
0x6C69B6: xor     ecx, ecx
0x6C69B8: test    dx, dx
0x6C69BB: jbe     short loc_6C69D4
0x6C69BD: mov     esi, [esi+40h]
0x6C69C0: movzx   ebp, cx
0x6C69C3: cmp     [esi+ebp*4], eax
0x6C69C6: jz      short loc_6C6A21
0x6C69C8: add     ecx, 1
0x6C69CB: cmp     cx, dx
0x6C69CE: jb      short loc_6C69C0
0x6C69D0: mov     esi, [esp+28h+arg_0]
0x6C69D4: mov     eax, [esp+28h+var_14]
0x6C69D8: add     eax, 1
0x6C69DB: add     ebx, 10h
0x6C69DE: cmp     eax, [edi+0Ch]
0x6C69E1: mov     [esp+28h+var_14], eax
0x6C69E5: jb      short loc_6C6980
0x6C69E7: test    esi, esi
0x6C69E9: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6C69F1: jz      short loc_6C6A0B
0x6C69F3: lea     edx, [esi+4]
0x6C69F6: push    edx; lpAddend
0x6C69F7: call    dword ptr ds:0A2807Ch
0x6C69FD: test    eax, eax
0x6C69FF: jnz     short loc_6C6A0B
0x6C6A01: mov     eax, [esi]
0x6C6A03: mov     edx, [eax]
0x6C6A05: push    1
0x6C6A07: mov     ecx, esi
0x6C6A09: call    edx
0x6C6A0B: mov     ecx, dword ptr [esp+28h+var_C]
0x6C6A0F: mov     large fs:0, ecx
0x6C6A16: pop     ecx
0x6C6A17: pop     edi
0x6C6A18: pop     esi
0x6C6A19: pop     ebp
0x6C6A1A: pop     ebx
0x6C6A1B: add     esp, 14h
0x6C6A1E: retn    4
0x6C6A21: cmp     cx, ds:0A7A160h
0x6C6A28: jz      short loc_6C69D0
0x6C6A2A: mov     eax, [edi+14h]
0x6C6A2D: mov     esi, [esp+28h+arg_0]
0x6C6A31: movzx   ecx, cx
0x6C6A34: lea     ecx, [ecx+ecx*2]
0x6C6A37: add     eax, ebx
0x6C6A39: shl     ecx, 4
0x6C6A3C: add     ecx, [esi+3Ch]
0x6C6A3F: mov     [eax+8], ecx
0x6C6A42: jmp     short loc_6C69D4
