0x8912A0: push    ebp
0x8912A1: mov     ebp, esp
0x8912A3: and     esp, 0FFFFFFF0h
0x8912A6: sub     esp, 3Ch
0x8912A9: mov     eax, ds:0B30AACh
0x8912AE: xor     eax, esp
0x8912B0: mov     [esp+3Ch+var_4], eax
0x8912B4: push    esi
0x8912B5: mov     esi, [ecx+374h]
0x8912BB: test    esi, esi
0x8912BD: jz      loc_8913A2
0x8912C3: mov     eax, [esi]
0x8912C5: mov     edx, [eax+4]
0x8912C8: mov     ecx, esi
0x8912CA: call    edx
0x8912CC: test    eax, eax
0x8912CE: jz      short loc_8912DE
0x8912D0: cmp     eax, offset dword_BA7FD8
0x8912D5: jz      short loc_8912FA
0x8912D7: mov     eax, [eax+4]
0x8912DA: test    eax, eax
0x8912DC: jnz     short loc_8912D0
0x8912DE: xor     al, al
0x8912E0: neg     al
0x8912E2: sbb     eax, eax
0x8912E4: and     eax, esi
0x8912E6: mov     edx, eax
0x8912E8: jz      loc_8913A2
0x8912EE: mov     eax, [edx+8]
0x8912F1: test    eax, eax
0x8912F3: jz      short loc_8912FE
0x8912F5: fld     dword ptr [eax+0Ch]
0x8912F8: jmp     short loc_891304
0x8912FA: mov     al, 1
0x8912FC: jmp     short loc_8912E0
0x8912FE: fld     dword ptr ds:0B2EFC4h
0x891304: test    eax, eax
0x891306: fstp    [esp+40h+var_34]
0x89130A: fld     [esp+40h+var_34]
0x89130E: lea     ecx, [eax+10h]
0x891311: fld     [ebp+arg_0]
0x891314: fld     st
0x891316: fsubp   st(2), st
0x891318: fxch    st(1)
0x89131A: fstp    [esp+40h+var_34]
0x89131E: jnz     short loc_891325
0x891320: mov     ecx, offset stru_BA7A40
0x891325: test    eax, eax
0x891327: movaps  xmm0, xmmword ptr [ecx]
0x89132A: movaps  [esp+40h+var_30], xmm0
0x89132F: lea     ecx, [eax+20h]
0x891332: jnz     short loc_891339
0x891334: mov     ecx, offset stru_BA7A40
0x891339: test    eax, eax
0x89133B: fld     dword ptr [esp+40h+var_30+8]
0x89133F: fld     [esp+40h+var_34]
0x891343: movaps  xmm0, xmmword ptr [ecx]
0x891346: fld     st
0x891348: movaps  [esp+40h+var_20], xmm0
0x89134D: faddp   st(2), st
0x89134F: fxch    st(1)
0x891351: fstp    dword ptr [esp+40h+var_30+8]
0x891355: fsubr   dword ptr [esp+40h+var_20+8]
0x891359: fstp    dword ptr [esp+40h+var_20+8]
0x89135D: jz      short loc_89136E
0x89135F: movaps  xmm0, [esp+40h+var_30]
0x891364: fld     dword ptr [eax+0Ch]
0x891367: movaps  xmmword ptr [eax+10h], xmm0
0x89136B: fstp    dword ptr [eax+1Ch]
0x89136E: mov     eax, [edx+8]
0x891371: test    eax, eax
0x891373: jz      short loc_891384
0x891375: movaps  xmm0, [esp+40h+var_20]
0x89137A: fld     dword ptr [eax+0Ch]
0x89137D: movaps  xmmword ptr [eax+20h], xmm0
0x891381: fstp    dword ptr [eax+2Ch]
0x891384: mov     eax, [edx+8]
0x891387: test    eax, eax
0x891389: jz      short loc_8913A0
0x89138B: fstp    dword ptr [eax+0Ch]
0x89138E: pop     esi
0x89138F: mov     ecx, [esp+3Ch+var_4]
0x891393: xor     ecx, esp
0x891395: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89139A: mov     esp, ebp
0x89139C: pop     ebp
0x89139D: retn    4
0x8913A0: fstp    st
0x8913A2: mov     ecx, [esp+40h+var_4]
0x8913A6: pop     esi
0x8913A7: xor     ecx, esp
0x8913A9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8913AE: mov     esp, ebp
0x8913B0: pop     ebp
0x8913B1: retn    4
