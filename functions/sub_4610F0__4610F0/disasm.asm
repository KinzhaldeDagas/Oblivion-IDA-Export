0x4610F0: sub     esp, 1Ch
0x4610F3: push    ebx
0x4610F4: mov     bl, [esp+20h+arg_24]
0x4610F8: test    bl, bl
0x4610FA: push    ebp
0x4610FB: push    esi
0x4610FC: push    edi
0x4610FD: mov     edi, [esp+2Ch+arg_0]
0x461101: mov     esi, ecx
0x461103: jnz     short loc_461117
0x461105: push    2
0x461107: push    0
0x461109: push    edi
0x46110A: call    Savegame_Rename
0x46110F: mov     ebp, eax
0x461111: mov     [esp+2Ch+var_1C], ebp
0x461115: jmp     short loc_46111D
0x461117: mov     [esp+2Ch+var_1C], edi
0x46111B: mov     ebp, edi
0x46111D: test    ebp, ebp
0x46111F: jz      short loc_461135
0x461121: cmp     byte ptr [ebp+24h], 0
0x461125: jz      short loc_461135
0x461127: push    0
0x461129: push    ebp
0x46112A: mov     ecx, esi
0x46112C: call    sub_45DBC0
0x461131: test    eax, eax
0x461133: jnz     short loc_4611AE
0x461135: mov     eax, [esp+2Ch+arg_4]
0x461139: test    eax, eax
0x46113B: jz      short loc_461143
0x46113D: mov     dword ptr [eax], 0
0x461143: mov     eax, [esp+2Ch+Dst]
0x461147: test    eax, eax
0x461149: jz      short loc_46114E
0x46114B: mov     byte ptr [eax], 0
0x46114E: mov     eax, [esp+2Ch+arg_C]
0x461152: test    eax, eax
0x461154: jz      short loc_461159
0x461156: mov     byte ptr [eax], 0
0x461159: mov     eax, [esp+2Ch+arg_10]
0x46115D: test    eax, eax
0x46115F: jz      short loc_461164
0x461161: mov     byte ptr [eax], 0
0x461164: mov     eax, [esp+2Ch+arg_14]
0x461168: test    eax, eax
0x46116A: jz      short loc_46116F
0x46116C: mov     byte ptr [eax], 0
0x46116F: mov     eax, [esp+2Ch+arg_18]
0x461173: test    eax, eax
0x461175: jz      short loc_46117A
0x461177: mov     byte ptr [eax], 0
0x46117A: mov     eax, [esp+2Ch+arg_1C]
0x46117E: test    eax, eax
0x461180: jz      short loc_461185
0x461182: mov     byte ptr [eax], 0
0x461185: mov     eax, [esp+2Ch+arg_20]
0x461189: test    eax, eax
0x46118B: jz      short loc_461193
0x46118D: mov     dword ptr [eax], 0
0x461193: test    bl, bl
0x461195: jnz     short loc_4611A2
0x461197: test    ebp, ebp
0x461199: jz      short loc_4611A2
0x46119B: mov     ecx, ebp
0x46119D: call    BSFile_Flush
0x4611A2: pop     edi
0x4611A3: pop     esi
0x4611A4: pop     ebp
0x4611A5: xor     eax, eax
0x4611A7: pop     ebx
0x4611A8: add     esp, 1Ch
0x4611AB: retn    28h ; '('
0x4611AE: mov     ecx, [esp+2Ch+arg_20]
0x4611B2: fldz
0x4611B4: push    ecx; int
0x4611B5: fstp    dword ptr [esp+30h+var_18]
0x4611B9: lea     edx, [esp+30h+arg_10]
0x4611BD: push    edx; int
0x4611BE: lea     ecx, [esp+34h+var_10]
0x4611C2: push    ecx; int
0x4611C3: mov     ecx, [esp+38h+arg_10]
0x4611C7: lea     edx, [esp+38h+var_18]
0x4611CB: push    edx; int
0x4611CC: push    ecx; void *
0x4611CD: mov     ecx, [esp+40h+Dst]
0x4611D1: lea     edx, [esp+40h+arg_0]
0x4611D5: push    edx; int
0x4611D6: mov     edx, [esp+44h+arg_4]
0x4611DA: push    ecx; Dst
0x4611DB: push    edx; int
0x4611DC: push    eax; int
0x4611DD: push    edi; int
0x4611DE: mov     ecx, esi
0x4611E0: mov     [esp+54h+arg_0], 0
0x4611E8: call    sub_45D5F0
0x4611ED: mov     ebx, eax
0x4611EF: mov     eax, [esp+2Ch+arg_C]
0x4611F3: test    eax, eax
0x4611F5: jz      short loc_461212
0x4611F7: movzx   ecx, word ptr [esp+2Ch+arg_0]
0x4611FC: mov     edx, ds:0B38720h
0x461202: push    ecx
0x461203: push    edx
0x461204: push    offset aSI_0; "%s %i"
0x461209: push    eax
0x46120A: call    __sprintf
0x46120F: add     esp, 10h
0x461212: mov     ecx, [esp+2Ch+arg_14]
0x461216: test    ecx, ecx
0x461218: jz      short loc_461256
0x46121A: fld     dword ptr [esp+2Ch+var_18]
0x46121E: mov     edx, ds:0B38730h
0x461224: fnstcw  word ptr [esp+2Ch+arg_0]
0x461228: movzx   eax, word ptr [esp+2Ch+arg_0]
0x46122D: or      eax, 0C00h
0x461232: mov     [esp+2Ch+arg_20], eax
0x461236: fldcw   word ptr [esp+2Ch+arg_20]
0x46123A: fistp   [esp+2Ch+var_18]
0x46123E: mov     eax, dword ptr [esp+2Ch+var_18]
0x461242: push    eax
0x461243: push    edx
0x461244: push    offset aSI_0; "%s %i"
0x461249: fldcw   word ptr [esp+38h+arg_0]
0x46124D: push    ecx
0x46124E: call    __sprintf
0x461253: add     esp, 10h
0x461256: mov     ebp, [esp+2Ch+arg_1C]
0x46125A: test    ebp, ebp
0x46125C: jz      short loc_4612A9
0x46125E: mov     ecx, [esp+2Ch+arg_10]
0x461262: mov     eax, 95217CB1h
0x461267: mul     ecx
0x461269: mov     esi, edx
0x46126B: shr     esi, 15h
0x46126E: mov     eax, esi
0x461270: imul    eax, 0FFC91180h
0x461276: add     ecx, eax
0x461278: mov     eax, 45E7B273h
0x46127D: mul     ecx
0x46127F: mov     edi, edx
0x461281: shr     edi, 0Eh
0x461284: mov     edx, edi
0x461286: imul    edx, 0FFFF15A0h
0x46128C: add     ecx, edx
0x46128E: mov     eax, 10624DD3h
0x461293: mul     ecx
0x461295: shr     edx, 6
0x461298: push    edx
0x461299: push    edi
0x46129A: push    esi
0x46129B: push    offset a02i02i02i; "%02i:%02i:%02i"
0x4612A0: push    ebp
0x4612A1: call    __sprintf
0x4612A6: add     esp, 14h
0x4612A9: mov     eax, [esp+2Ch+arg_18]
0x4612AD: test    eax, eax
0x4612AF: jz      short loc_4612DD
0x4612B1: movzx   ecx, [esp+2Ch+var_6]
0x4612B6: movzx   edx, [esp+2Ch+var_8]
0x4612BB: push    ecx
0x4612BC: movzx   ecx, word ptr [esp+30h+var_10]
0x4612C1: push    edx
0x4612C2: movzx   edx, [esp+34h+var_A]
0x4612C7: push    ecx
0x4612C8: movzx   ecx, word ptr [esp+38h+var_10+2]
0x4612CD: push    edx
0x4612CE: push    ecx
0x4612CF: push    offset aDD02d02d02d; "%d/%d/%02d %02d:%02d"
0x4612D4: push    eax
0x4612D5: call    __sprintf
0x4612DA: add     esp, 1Ch
0x4612DD: mov     esi, [esp+2Ch+var_1C]
0x4612E1: mov     eax, ds:0A853D0h
0x4612E6: mov     edx, [esi]
0x4612E8: mov     edx, [edx+0Ch]
0x4612EB: push    eax
0x4612EC: push    0
0x4612EE: mov     ecx, esi
0x4612F0: call    edx
0x4612F2: cmp     [esp+2Ch+arg_24], 0
0x4612F7: jnz     short loc_461300
0x4612F9: mov     ecx, esi
0x4612FB: call    BSFile_Flush
0x461300: pop     edi
0x461301: pop     esi
0x461302: pop     ebp
0x461303: mov     eax, ebx
0x461305: pop     ebx
0x461306: add     esp, 1Ch
0x461309: retn    28h ; '('
