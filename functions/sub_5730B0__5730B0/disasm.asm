0x5730B0: push    0FFFFFFFFh
0x5730B2: push    offset SEH_5730B0
0x5730B7: mov     eax, large fs:0
0x5730BD: push    eax
0x5730BE: sub     esp, 10h
0x5730C1: push    esi
0x5730C2: push    edi
0x5730C3: mov     eax, ds:0B30AACh
0x5730C8: xor     eax, esp
0x5730CA: push    eax
0x5730CB: lea     eax, [esp+28h+var_C]
0x5730CF: mov     large fs:0, eax
0x5730D5: mov     esi, ecx
0x5730D7: push    0DCh ; 'Ü'; Size
0x5730DC: call    FormHeapAlloc
0x5730E1: add     esp, 4
0x5730E4: mov     [esp+28h+var_1C], eax
0x5730E8: xor     edi, edi
0x5730EA: cmp     eax, edi
0x5730EC: mov     [esp+28h+var_4], edi
0x5730F0: jz      short loc_5730FC
0x5730F2: push    edi
0x5730F3: mov     ecx, eax; this
0x5730F5: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x5730FA: mov     edi, eax
0x5730FC: cmp     byte ptr [esp+28h+arg_8], 0
0x573101: mov     [esp+28h+var_4], 0FFFFFFFFh
0x573109: mov     ecx, edi
0x57310B: jz      short loc_57311B
0x57310D: push    offset aFadernodeBelow; "FaderNode Below Menus"
0x573112: mov     [esi], edi
0x573114: call    NiObjectNET_SetName
0x573119: jmp     short loc_573136
0x57311B: push    offset aFadernodeAbove; "FaderNode Above Menus"
0x573120: mov     [esi+4], edi
0x573123: call    NiObjectNET_SetName
0x573128: fld     [esp+28h+arg_4]
0x57312C: fsub    qword ptr ds:0A46E48h
0x573132: fstp    [esp+28h+arg_4]
0x573136: push    114h; Size
0x57313B: call    FormHeapAlloc
0x573140: add     esp, 4
0x573143: mov     [esp+28h+arg_8], eax
0x573147: test    eax, eax
0x573149: mov     [esp+28h+var_4], 1
0x573151: jz      short loc_57315E
0x573153: mov     ecx, eax
0x573155: call    sub_719760
0x57315A: mov     esi, eax
0x57315C: jmp     short loc_573160
0x57315E: xor     esi, esi
0x573160: push    offset aFadernodelight; "FaderNodeLight"
0x573165: mov     ecx, esi
0x573167: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x57316F: call    NiObjectNET_SetName
0x573174: fld1
0x573176: add     dword ptr [esi+0B8h], 1
0x57317D: fst     [esp+28h+var_18]
0x573181: mov     eax, [esp+28h+var_18]
0x573185: fst     [esp+28h+var_14]
0x573189: mov     ecx, [esp+28h+var_14]
0x57318D: fstp    [esp+28h+var_10]
0x573191: mov     edx, [esp+28h+var_10]
0x573195: mov     [esi+0E0h], eax
0x57319B: mov     [esi+0E4h], ecx
0x5731A1: push    edi
0x5731A2: mov     ecx, esi
0x5731A4: mov     [esi+0E8h], edx
0x5731AA: call    sub_708E40
0x5731AF: mov     eax, [edi]
0x5731B1: mov     edx, [eax+84h]
0x5731B7: push    1
0x5731B9: push    esi
0x5731BA: mov     ecx, edi
0x5731BC: call    edx
0x5731BE: push    1Ch; Size
0x5731C0: call    FormHeapAlloc
0x5731C5: mov     esi, eax
0x5731C7: add     esp, 4
0x5731CA: mov     [esp+28h+arg_8], esi
0x5731CE: test    esi, esi
0x5731D0: mov     [esp+28h+var_4], 2
0x5731D8: jz      short loc_5731EF
0x5731DA: mov     ecx, esi; this
0x5731DC: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x5731E1: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x5731E7: mov     word ptr [esi+18h], 8
0x5731ED: jmp     short loc_5731F1
0x5731EF: xor     esi, esi
0x5731F1: mov     ax, [esi+18h]
0x5731F5: and     ax, 0FFEFh
0x5731F9: or      ax, 28h
0x5731FD: push    esi; a2
0x5731FE: mov     ecx, edi; this
0x573200: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x573208: mov     [esi+18h], ax
0x57320C: call    sub_405680
0x573211: fild    dword ptr ds:0B06C4Ch
0x573217: fstp    [esp+28h+var_1C]
0x57321B: fld1
0x57321D: fstp    [esp+28h+arg_8]
0x573221: fild    dword ptr ds:0B06C50h
0x573227: fld     [esp+28h+var_1C]
0x57322B: fld     st
0x57322D: fdivp   st(2), st
0x57322F: fxch    st(1)
0x573231: fcomp   qword ptr ds:0A31C70h
0x573237: fnstsw  ax
0x573239: test    ah, 44h
0x57323C: jnp     short loc_573248
0x57323E: fld     dword ptr ds:0A688ACh
0x573244: fstp    [esp+28h+arg_8]
0x573248: fld     dword ptr ds:0A688A8h
0x57324E: fucomp  st(1)
0x573250: fnstsw  ax
0x573252: test    ah, 44h
0x573255: jnp     short loc_573267
0x573257: fdivr   qword ptr ds:0A688A0h
0x57325D: fmul    [esp+28h+arg_8]
0x573261: fstp    [esp+28h+arg_8]
0x573265: jmp     short loc_573269
0x573267: fstp    st
0x573269: fld     [esp+28h+arg_8]
0x57326D: push    1
0x57326F: fabs
0x573271: push    edi
0x573272: fstp    [esp+30h+arg_8]
0x573276: fld     [esp+30h+arg_8]
0x57327A: fstp    dword ptr [edi+60h]
0x57327D: fldz
0x57327F: fst     [esp+30h+var_18]
0x573283: fld     [esp+30h+arg_4]
0x573287: mov     ecx, [esp+30h+var_18]
0x57328B: fstp    [esp+30h+var_14]
0x57328F: mov     [edi+54h], ecx
0x573292: mov     edx, [esp+30h+var_14]
0x573296: mov     ecx, [esp+30h+arg_0]
0x57329A: fstp    [esp+30h+var_10]
0x57329E: mov     eax, [esp+30h+var_10]
0x5732A2: mov     [edi+58h], edx
0x5732A5: mov     [edi+5Ch], eax
0x5732A8: mov     edx, [ecx]
0x5732AA: mov     eax, [edx+84h]
0x5732B0: call    eax
0x5732B2: mov     ecx, [esp+28h+var_C]
0x5732B6: mov     large fs:0, ecx
0x5732BD: pop     ecx
0x5732BE: pop     edi
0x5732BF: pop     esi
0x5732C0: add     esp, 1Ch
0x5732C3: retn    0Ch
