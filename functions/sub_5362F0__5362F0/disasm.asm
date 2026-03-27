0x5362F0: push    ecx
0x5362F1: fldz
0x5362F3: push    ebp; int
0x5362F4: mov     ebp, [esp+8+arg_0]
0x5362F8: fstp    [esp+8+var_4]
0x5362FC: test    ebp, ebp
0x5362FE: push    esi
0x5362FF: jz      short loc_536318
0x536301: mov     eax, [ebp+8]
0x536304: test    eax, eax
0x536306: jz      short loc_536318
0x536308: add     eax, 14h
0x53630B: jz      short loc_536318
0x53630D: mov     eax, [eax]
0x53630F: test    eax, eax
0x536311: jz      short loc_536318
0x536313: mov     esi, [eax+8]
0x536316: jmp     short loc_53631A
0x536318: xor     esi, esi
0x53631A: mov     eax, [esi]
0x53631C: mov     edx, [eax+88h]
0x536322: push    edi
0x536323: mov     ecx, esi
0x536325: call    edx
0x536327: mov     edi, eax
0x536329: test    edi, edi
0x53632B: jz      short loc_536387
0x53632D: mov     ecx, [edi+8]
0x536330: mov     eax, [ecx]
0x536332: mov     edx, [eax+20h]
0x536335: push    ebx
0x536336: xor     ebx, ebx
0x536338: mov     [esp+14h+arg_0], ebx
0x53633C: call    edx
0x53633E: mov     esi, eax
0x536340: cmp     esi, 0FFFFFFFFh
0x536343: jz      short loc_53637C
0x536345: mov     eax, [edi]
0x536347: mov     edx, [eax+9Ch]
0x53634D: push    esi
0x53634E: mov     ecx, edi
0x536350: call    edx
0x536352: push    eax
0x536353: call    sub_536260
0x536358: fadd    [esp+1Ch+var_8]
0x53635C: mov     ecx, [edi+8]
0x53635F: mov     eax, [ecx]
0x536361: mov     edx, [eax+24h]
0x536364: fstp    [esp+1Ch+var_8]
0x536368: add     esp, 4
0x53636B: push    esi
0x53636C: add     ebx, 1
0x53636F: call    edx
0x536371: mov     esi, eax
0x536373: cmp     esi, 0FFFFFFFFh
0x536376: jnz     short loc_536345
0x536378: mov     [esp+1Ch+var_4], ebx
0x53637C: fld     [esp+1Ch+var_C]
0x536380: pop     ebx
0x536381: fidiv   [esp+18h+var_4]
0x536385: jmp     short loc_536393
0x536387: mov     eax, [esi+10h]
0x53638A: push    eax
0x53638B: call    sub_536260
0x536390: add     esp, 4
0x536393: test    ebp, ebp
0x536395: fstp    [esp+18h+var_C]
0x536399: fld1
0x53639B: pop     edi
0x53639C: fstp    [esp+14h+var_4]; float
0x5363A0: jz      short loc_5363B3
0x5363A2: mov     eax, [ebp+8]
0x5363A5: test    eax, eax
0x5363A7: jz      short loc_5363B3
0x5363A9: add     eax, 14h
0x5363AC: jz      short loc_5363B3
0x5363AE: mov     ecx, [eax+1Ch]
0x5363B1: jmp     short loc_5363B5
0x5363B3: xor     ecx, ecx
0x5363B5: fld     [esp+14h+var_C]
0x5363B9: mov     edx, ecx
0x5363BB: and     dl, 3Fh
0x5363BE: cmp     dl, 8
0x5363C1: pop     esi
0x5363C2: pop     ebp
0x5363C3: jnz     short loc_536422
0x5363C5: fldz
0x5363C7: fcom    st(1)
0x5363C9: fnstsw  ax
0x5363CB: test    ah, 5
0x5363CE: jp      short loc_5363EC; jumptable 005363E5 cases 1-5,8,11,14
0x5363D0: shr     ecx, 8
0x5363D3: and     ecx, 1Fh
0x5363D6: lea     eax, [ecx-1]; switch 24 cases
0x5363D9: cmp     eax, 17h
0x5363DC: ja      short def_5363E5
0x5363DE: movzx   eax, ds:byte_53643C[eax]
0x5363E5: jmp     ds:jpt_5363E5[eax*4]; switch jump
0x5363EC: fstp    st; jumptable 005363E5 cases 1-5,8,11,14
0x5363EE: fld     dword ptr ds:0B37AC8h
0x5363F4: fstp    [esp+0Ch+var_4]; jumptable 005363E5 cases 17-23
0x5363F8: fmul    [esp+0Ch+var_4]
0x5363FC: fstp    [esp+0Ch+var_4]
0x536400: fld     [esp+0Ch+var_4]
0x536404: pop     ecx
0x536405: retn
0x536406: fstp    st; jumptable 005363E5 cases 6,7,9,10,12,13,15,16,24
0x536408: fld     dword ptr ds:0B37AD0h
0x53640E: fstp    [esp+0Ch+var_4]
0x536412: fmul    [esp+0Ch+var_4]
0x536416: fstp    [esp+0Ch+var_4]
0x53641A: fld     [esp+0Ch+var_4]
0x53641E: pop     ecx
0x53641F: retn
