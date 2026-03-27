0x6E9220: sub     esp, 0Ch
0x6E9223: push    ebx
0x6E9224: push    edi
0x6E9225: mov     edi, [esp+14h+arg_0]
0x6E9229: mov     ebx, ecx
0x6E922B: push    edi
0x6E922C: mov     [esp+18h+var_4], ebx
0x6E9230: call    sub_715820
0x6E9235: test    al, al
0x6E9237: jnz     short loc_6E9243
0x6E9239: pop     edi
0x6E923A: xor     al, al
0x6E923C: pop     ebx
0x6E923D: add     esp, 0Ch
0x6E9240: retn    4
0x6E9243: mov     eax, [ebx+3Ch]
0x6E9246: cmp     eax, [edi+3Ch]
0x6E9249: jnz     short loc_6E9239
0x6E924B: mov     ecx, [ebx+40h]
0x6E924E: cmp     ecx, [edi+40h]
0x6E9251: jnz     short loc_6E9239
0x6E9253: movzx   ecx, word ptr [ebx+4Eh]
0x6E9257: cmp     cx, [edi+4Eh]
0x6E925B: jnz     short loc_6E9239
0x6E925D: mov     dx, [ebx+5Eh]
0x6E9261: cmp     dx, [edi+5Eh]
0x6E9265: jnz     short loc_6E9239
0x6E9267: mov     eax, [ebx+6Ch]
0x6E926A: cmp     eax, [edi+6Ch]
0x6E926D: jnz     short loc_6E9239
0x6E926F: xor     eax, eax
0x6E9271: test    cx, cx
0x6E9274: push    ebp
0x6E9275: push    esi
0x6E9276: mov     [esp+1Ch+var_C], eax
0x6E927A: jbe     short loc_6E92EE
0x6E927C: lea     esp, [esp+0]
0x6E9280: mov     ecx, [ebx+48h]
0x6E9283: mov     esi, [ecx+eax*4]
0x6E9286: test    esi, esi
0x6E9288: mov     edx, [edi+48h]
0x6E928B: mov     ebp, [edx+eax*4]
0x6E928E: jz      loc_6E9328
0x6E9294: test    ebp, ebp
0x6E9296: jz      loc_6E932C
0x6E929C: mov     ecx, [esi+8]
0x6E929F: cmp     ecx, [ebp+8]
0x6E92A2: jnz     loc_6E932C
0x6E92A8: xor     edi, edi
0x6E92AA: test    ecx, ecx
0x6E92AC: jbe     short loc_6E92DB
0x6E92AE: mov     edi, edi
0x6E92B0: mov     eax, [esi]
0x6E92B2: lea     edx, ds:0[edi*4]
0x6E92B9: mov     ecx, [edx+eax]
0x6E92BC: mov     eax, [ebp+0]
0x6E92BF: add     eax, edx
0x6E92C1: mov     edx, [ecx]
0x6E92C3: mov     eax, [eax]
0x6E92C5: mov     edx, [edx+2Ch]
0x6E92C8: push    eax
0x6E92C9: call    edx
0x6E92CB: test    al, al
0x6E92CD: jz      short loc_6E932C
0x6E92CF: add     edi, 1
0x6E92D2: cmp     edi, [esi+8]
0x6E92D5: jb      short loc_6E92B0
0x6E92D7: mov     eax, [esp+1Ch+var_C]
0x6E92DB: mov     edi, [esp+1Ch+arg_0]
0x6E92DF: movzx   ecx, word ptr [ebx+4Eh]
0x6E92E3: add     eax, 1
0x6E92E6: cmp     eax, ecx
0x6E92E8: mov     [esp+1Ch+var_C], eax
0x6E92EC: jb      short loc_6E9280
0x6E92EE: xor     ecx, ecx
0x6E92F0: cmp     [ebx+5Eh], cx
0x6E92F4: mov     [esp+1Ch+var_C], ecx
0x6E92F8: jbe     loc_6E9398
0x6E92FE: mov     edi, edi
0x6E9300: mov     edx, [ebx+58h]
0x6E9303: mov     eax, [edi+58h]
0x6E9306: mov     ebp, [edx+ecx*4]
0x6E9309: test    ebp, ebp
0x6E930B: mov     eax, [eax+ecx*4]
0x6E930E: mov     [esp+1Ch+var_8], eax
0x6E9312: jz      short loc_6E9338
0x6E9314: test    eax, eax
0x6E9316: jz      short loc_6E932C
0x6E9318: mov     edx, [ebp+8]
0x6E931B: cmp     edx, [eax+8]
0x6E931E: jnz     short loc_6E932C
0x6E9320: xor     esi, esi
0x6E9322: test    edx, edx
0x6E9324: jbe     short loc_6E9385
0x6E9326: jmp     short loc_6E9344
0x6E9328: test    ebp, ebp
0x6E932A: jz      short loc_6E92DF
0x6E932C: pop     esi
0x6E932D: pop     ebp
0x6E932E: pop     edi
0x6E932F: xor     al, al
0x6E9331: pop     ebx
0x6E9332: add     esp, 0Ch
0x6E9335: retn    4
0x6E9338: test    eax, eax
0x6E933A: jnz     short loc_6E932C
0x6E933C: jmp     short loc_6E9385
0x6E933E: align 10h
0x6E9340: mov     eax, [esp+1Ch+var_8]
0x6E9344: mov     ecx, [ebp+0]
0x6E9347: mov     edx, [eax]
0x6E9349: mov     edi, [ecx+esi*4]
0x6E934C: mov     ebx, [edx+esi*4]
0x6E934F: mov     ecx, [edi]
0x6E9351: mov     eax, [ecx]
0x6E9353: mov     edx, [ebx]
0x6E9355: mov     eax, [eax+2Ch]
0x6E9358: push    edx
0x6E9359: call    eax
0x6E935B: test    al, al
0x6E935D: jz      short loc_6E932C
0x6E935F: mov     ecx, [edi+4]
0x6E9362: mov     ebx, [ebx+4]
0x6E9365: mov     edx, [ecx]
0x6E9367: mov     eax, [edx+2Ch]
0x6E936A: push    ebx
0x6E936B: call    eax
0x6E936D: test    al, al
0x6E936F: jz      short loc_6E932C
0x6E9371: add     esi, 1
0x6E9374: cmp     esi, [ebp+8]
0x6E9377: jb      short loc_6E9340
0x6E9379: mov     ecx, [esp+1Ch+var_C]
0x6E937D: mov     ebx, [esp+1Ch+var_4]
0x6E9381: mov     edi, [esp+1Ch+arg_0]
0x6E9385: movzx   edx, word ptr [ebx+5Eh]
0x6E9389: add     ecx, 1
0x6E938C: cmp     ecx, edx
0x6E938E: mov     [esp+1Ch+var_C], ecx
0x6E9392: jb      loc_6E9300
0x6E9398: xor     esi, esi
0x6E939A: cmp     [ebx+6Ch], esi
0x6E939D: jbe     short loc_6E93CC
0x6E939F: nop
0x6E93A0: mov     eax, [ebx+64h]
0x6E93A3: lea     edx, ds:0[esi*4]
0x6E93AA: mov     ecx, [edx+eax]
0x6E93AD: mov     eax, [edi+64h]
0x6E93B0: add     eax, edx
0x6E93B2: mov     edx, [ecx]
0x6E93B4: mov     eax, [eax]
0x6E93B6: mov     edx, [edx+2Ch]
0x6E93B9: push    eax
0x6E93BA: call    edx
0x6E93BC: test    al, al
0x6E93BE: jz      loc_6E932C
0x6E93C4: add     esi, 1
0x6E93C7: cmp     esi, [ebx+6Ch]
0x6E93CA: jb      short loc_6E93A0
0x6E93CC: pop     esi
0x6E93CD: pop     ebp
0x6E93CE: pop     edi
0x6E93CF: mov     al, 1
0x6E93D1: pop     ebx
0x6E93D2: add     esp, 0Ch
0x6E93D5: retn    4
