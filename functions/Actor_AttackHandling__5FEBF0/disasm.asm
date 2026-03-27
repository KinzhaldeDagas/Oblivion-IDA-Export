0x5FEBF0: push    0FFFFFFFFh
0x5FEBF2: push    offset Actor_AttackHandling_SEH
0x5FEBF7: mov     eax, large fs:0
0x5FEBFD: push    eax
0x5FEBFE: sub     esp, 1C0h
0x5FEC04: mov     eax, ds:0B30AACh
0x5FEC09: xor     eax, esp
0x5FEC0B: mov     [esp+1CCh+var_10], eax
0x5FEC12: push    ebx; int
0x5FEC13: push    ebp; int
0x5FEC14: push    esi; int
0x5FEC15: push    edi; int
0x5FEC16: mov     eax, ds:0B30AACh
0x5FEC1B: xor     eax, esp
0x5FEC1D: push    eax
0x5FEC1E: lea     eax, [esp+1E0h+var_C]
0x5FEC25: mov     large fs:0, eax
0x5FEC2B: mov     ebx, [esp+1E0h+arg_8]
0x5FEC32: test    ebx, ebx
0x5FEC34: mov     esi, [esp+1E0h+arg_4]
0x5FEC3B: mov     edi, ecx
0x5FEC3D: mov     [esp+1E0h+var_1BC], esi; int
0x5FEC41: jz      short loc_5FECA2
0x5FEC43: lea     ecx, [ebx+44h]
0x5FEC46: call    BaseExtraList_HasGhost
0x5FEC4B: test    al, al
0x5FEC4D: jz      short loc_5FECA2
0x5FEC4F: mov     ecx, [edi+58h]
0x5FEC52: test    ecx, ecx
0x5FEC54: jz      short loc_5FEC6B
0x5FEC56: mov     eax, [ecx]
0x5FEC58: mov     edx, [eax+0ECh]
0x5FEC5E: push    1
0x5FEC60: call    edx
0x5FEC62: test    eax, eax
0x5FEC64: jz      short loc_5FEC6B
0x5FEC66: mov     eax, [eax+8]
0x5FEC69: jmp     short loc_5FEC6D
0x5FEC6B: xor     eax, eax
0x5FEC6D: test    eax, eax
0x5FEC6F: jz      short loc_5FEC7A
0x5FEC71: movsx   eax, byte ptr [eax+90h]
0x5FEC78: jmp     short loc_5FEC7D
0x5FEC7A: or      eax, 0FFFFFFFFh
0x5FEC7D: fldz
0x5FEC7F: push    0; char
0x5FEC81: push    0; char
0x5FEC83: push    0FFFFFFFFh; char
0x5FEC85: push    0FFFFFFFFh; int
0x5FEC87: push    eax; int
0x5FEC88: push    0; int
0x5FEC8A: sub     esp, 8
0x5FEC8D: fst     [esp+204h+var_200]; int
0x5FEC91: fstp    [esp+204h+var_204]; float
0x5FEC94: push    edi; int
0x5FEC95: call    sub_6AF880
0x5FEC9A: add     esp, 24h
0x5FEC9D: jmp     Actor_AttackHandling___Done
0x5FECA2: cmp     dword ptr ds:0B148CCh, 1
0x5FECA9: fldz
0x5FECAB: fld1
0x5FECAD: mov     [esp+1E0h+var_191], 0
0x5FECB2: jle     loc_5FEF83
0x5FECB8: test    esi, esi
0x5FECBA: jnz     loc_5FEF83
0x5FECC0: cmp     edi, ds:0B333C4h
0x5FECC6: jnz     short loc_5FED14
0x5FECC8: fxch    st(1)
0x5FECCA: fst     [esp+1E0h+var_168]
0x5FECCE: mov     eax, [esp+1E0h+var_168]
0x5FECD2: fstp    [esp+1E0h+var_164]
0x5FECD6: mov     ecx, [esp+1E0h+var_164]
0x5FECDA: mov     [esp+1E0h+var_158], eax
0x5FECE1: fst     [esp+1E0h+var_160]
0x5FECE8: mov     edx, [esp+1E0h+var_160]
0x5FECEF: fstp    [esp+1E0h+var_15C]
0x5FECF6: mov     eax, [esp+1E0h+var_15C]
0x5FECFD: mov     [esp+1E0h+var_154], ecx
0x5FED04: mov     [esp+1E0h+var_150], edx
0x5FED0B: mov     [esp+1E0h+var_14C], eax
0x5FED12: jmp     short loc_5FED5C
0x5FED14: fst     [esp+1E0h+var_168]
0x5FED18: mov     ecx, [esp+1E0h+var_168]
0x5FED1C: fstp    [esp+1E0h+var_15C]
0x5FED23: mov     [esp+1E0h+var_158], ecx
0x5FED2A: mov     ecx, [esp+1E0h+var_15C]
0x5FED31: fst     [esp+1E0h+var_164]
0x5FED35: mov     edx, [esp+1E0h+var_164]
0x5FED39: fstp    [esp+1E0h+var_160]
0x5FED40: mov     eax, [esp+1E0h+var_160]
0x5FED47: mov     [esp+1E0h+var_154], edx
0x5FED4E: mov     [esp+1E0h+var_150], eax
0x5FED55: mov     [esp+1E0h+var_14C], ecx
0x5FED5C: mov     edx, [edi]
0x5FED5E: mov     eax, [edx+154h]
0x5FED64: mov     ecx, edi
0x5FED66: call    eax
0x5FED68: test    eax, eax
0x5FED6A: jz      short loc_5FEDCA
0x5FED6C: mov     ecx, [edi+58h]
0x5FED6F: mov     edx, [ecx]
0x5FED71: lea     ebp, [eax+64h]
0x5FED74: mov     eax, [edx+310h]
0x5FED7A: call    eax
0x5FED7C: push    eax
0x5FED7D: lea     ecx, [esp+1E4h+var_1A0]
0x5FED81: push    ecx
0x5FED82: mov     ecx, ebp
0x5FED84: call    sub_53D4B0
0x5FED89: mov     edx, [eax]
0x5FED8B: mov     ecx, [eax+4]
0x5FED8E: mov     [esp+1E0h+var_178], edx
0x5FED92: mov     edx, [eax+8]
0x5FED95: lea     eax, [esp+1E0h+a2]
0x5FED99: mov     [esp+1E0h+var_174], ecx
0x5FED9D: push    eax; a2
0x5FED9E: mov     ecx, edi; this
0x5FEDA0: mov     [esp+1E4h+var_170], edx
0x5FEDA4: call    sub_5E6A40
0x5FEDA9: push    eax
0x5FEDAA: lea     ecx, [esp+1E4h+var_168]
0x5FEDAE: push    ecx
0x5FEDAF: mov     ecx, ebp
0x5FEDB1: call    sub_53D4B0
0x5FEDB6: mov     edx, [eax]
0x5FEDB8: mov     ecx, [eax+4]
0x5FEDBB: mov     [esp+1E0h+var_1A0], edx
0x5FEDBF: mov     edx, [eax+8]
0x5FEDC2: mov     [esp+1E0h+var_19C], ecx; int
0x5FEDC6: mov     [esp+1E0h+var_198], edx; int
0x5FEDCA: fld     [esp+1E0h+var_1A0]
0x5FEDCE: fsub    [esp+1E0h+var_178]
0x5FEDD2: fstp    [esp+1E0h+a2]
0x5FEDD6: fld     [esp+1E0h+var_19C]
0x5FEDDA: fsub    [esp+1E0h+var_174]
0x5FEDDE: fstp    [esp+1E0h+var_1C0]
0x5FEDE2: fld     [esp+1E0h+var_198]
0x5FEDE6: fsub    [esp+1E0h+var_170]
0x5FEDEA: fstp    [esp+1E0h+var_184]
0x5FEDEE: fld     [esp+1E0h+a2]
0x5FEDF2: fstp    [esp+1E0h+a2]
0x5FEDF6: mov     eax, [esp+1E0h+a2]
0x5FEDFA: fld     [esp+1E0h+var_1C0]
0x5FEDFE: mov     [esp+1E0h+var_178], eax
0x5FEE02: fstp    [esp+1E0h+var_18C]
0x5FEE06: mov     ecx, [esp+1E0h+var_18C]
0x5FEE0A: fld     [esp+1E0h+var_184]
0x5FEE0E: mov     [esp+1E0h+var_174], ecx
0x5FEE12: fstp    [esp+1E0h+var_188]
0x5FEE16: mov     edx, [esp+1E0h+var_188]
0x5FEE1A: lea     ecx, [esp+1E0h+var_178]
0x5FEE1E: mov     [esp+1E0h+var_170], edx
0x5FEE22: call    sub_43F350
0x5FEE27: fstp    st
0x5FEE29: fld     [esp+1E0h+var_178]
0x5FEE2D: lea     eax, [esp+1E0h+var_158]
0x5FEE34: fld     qword ptr ds:0A6E6F8h
0x5FEE3A: push    eax
0x5FEE3B: fmul    st(1), st
0x5FEE3D: lea     ecx, [esp+1E4h+var_178]
0x5FEE41: fxch    st(1)
0x5FEE43: push    ecx
0x5FEE44: fstp    [esp+1E8h+a2]
0x5FEE48: fld     [esp+1E8h+var_174]
0x5FEE4C: fmul    st, st(1)
0x5FEE4E: fstp    [esp+1E8h+var_1C0]
0x5FEE52: fmul    [esp+1E8h+var_170]
0x5FEE56: fstp    [esp+1E8h+var_184]
0x5FEE5A: fld     [esp+1E8h+a2]
0x5FEE5E: fld     qword ptr ds:0A2FC80h
0x5FEE64: fmul    st(1), st
0x5FEE66: fxch    st(1)
0x5FEE68: fstp    [esp+1E8h+a2]; float
0x5FEE6C: fld     [esp+1E8h+var_1C0]
0x5FEE70: fmul    st, st(1)
0x5FEE72: fstp    [esp+1E8h+var_1C0]; int
0x5FEE76: fmul    [esp+1E8h+var_184]
0x5FEE7A: fstp    [esp+1E8h+var_184]
0x5FEE7E: fld     [esp+1E8h+a2]
0x5FEE82: fstp    [esp+1E8h+var_178]
0x5FEE86: fld     [esp+1E8h+var_1C0]
0x5FEE8A: fstp    [esp+1E8h+var_174]
0x5FEE8E: fld     [esp+1E8h+var_184]
0x5FEE92: fstp    [esp+1E8h+var_170]
0x5FEE96: call    sub_6FCDC0
0x5FEE9B: mov     edx, [esp+1E8h+var_1A0]
0x5FEE9F: mov     ecx, [esp+1E8h+var_198]
0x5FEEA3: mov     ebp, eax
0x5FEEA5: mov     eax, [esp+1E8h+var_19C]
0x5FEEA9: mov     [ebp+54h], edx
0x5FEEAC: mov     [ebp+58h], eax
0x5FEEAF: push    1Ch; Size
0x5FEEB1: mov     [ebp+5Ch], ecx
0x5FEEB4: call    FormHeapAlloc
0x5FEEB9: mov     esi, eax
0x5FEEBB: add     esp, 0Ch
0x5FEEBE: mov     [esp+1E0h+var_1A0], esi
0x5FEEC2: test    esi, esi
0x5FEEC4: mov     [esp+1E0h+var_4], 0
0x5FEECF: jz      short loc_5FEEE8
0x5FEED1: mov     ecx, esi; this
0x5FEED3: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x5FEED8: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x5FEEDE: mov     word ptr [esi+18h], 8
0x5FEEE4: mov     eax, esi
0x5FEEE6: jmp     short loc_5FEEEA
0x5FEEE8: xor     eax, eax
0x5FEEEA: mov     dx, [eax+18h]
0x5FEEEE: and     dx, 0FFD7h
0x5FEEF3: or      dx, 10h
0x5FEEF7: push    eax; a2
0x5FEEF8: mov     ecx, ebp; this
0x5FEEFA: mov     [esp+1E4h+var_4], 0FFFFFFFFh
0x5FEF05: mov     [eax+18h], dx
0x5FEF09: call    sub_405680
0x5FEF0E: push    1Ch; Size
0x5FEF10: call    FormHeapAlloc
0x5FEF15: mov     esi, eax
0x5FEF17: add     esp, 4
0x5FEF1A: mov     [esp+1E0h+var_1A0], esi; int
0x5FEF1E: test    esi, esi
0x5FEF20: mov     [esp+1E0h+var_4], 1
0x5FEF2B: jz      short loc_5FEF42
0x5FEF2D: mov     ecx, esi; this
0x5FEF2F: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x5FEF34: mov     dword ptr [esi], offset ??_7NiZBufferProperty@@6B@; const NiZBufferProperty::`vftable'
0x5FEF3A: mov     word ptr [esi+18h], 0Fh
0x5FEF40: jmp     short loc_5FEF44
0x5FEF42: xor     esi, esi
0x5FEF44: mov     ax, [esi+18h]
0x5FEF48: and     ax, 0FFFEh
0x5FEF4C: or      ax, 2
0x5FEF50: push    esi; a2
0x5FEF51: mov     ecx, ebp; this
0x5FEF53: mov     [esp+1E4h+var_4], 0FFFFFFFFh
0x5FEF5E: mov     [esi+18h], ax
0x5FEF62: call    sub_405680
0x5FEF67: fld     dword ptr ds:0B148D4h
0x5FEF6D: push    ecx
0x5FEF6E: mov     ecx, ds:0B333A0h
0x5FEF74: fstp    [esp+1E4h+var_1E4]; float
0x5FEF77: push    ebp; int
0x5FEF78: call    sub_440E60
0x5FEF7D: mov     esi, [esp+1E0h+var_1BC]
0x5FEF81: jmp     short Actor_AttackHandling___EquippedWeaponAndAttackReach
0x5FEF83: fstp    st(1)
0x5FEF85: fstp    st
