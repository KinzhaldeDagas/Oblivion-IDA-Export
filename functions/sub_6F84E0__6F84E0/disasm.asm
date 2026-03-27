0x6F84E0: push    0FFFFFFFFh
0x6F84E2: push    offset SEH_6F84E0
0x6F84E7: mov     eax, large fs:0
0x6F84ED: push    eax
0x6F84EE: sub     esp, 48h
0x6F84F1: push    ebx
0x6F84F2: push    esi
0x6F84F3: mov     eax, ds:0B30AACh
0x6F84F8: xor     eax, esp
0x6F84FA: push    eax
0x6F84FB: lea     eax, [esp+60h+var_C]
0x6F84FF: mov     large fs:0, eax
0x6F8505: mov     esi, ecx
0x6F8507: mov     [esp+60h+var_54], esi
0x6F850B: xor     ebx, ebx
0x6F850D: push    ebx; int
0x6F850E: call    ??0_Lockit@std@@QAE@H@Z; std::_Lockit::_Lockit(int)
0x6F8513: mov     eax, 0Fh
0x6F8518: mov     [esi+1Ch], eax
0x6F851B: mov     [esi+18h], ebx
0x6F851E: mov     [esp+60h+var_4], ebx
0x6F8522: mov     [esi+8], bl
0x6F8525: mov     [esi+38h], eax
0x6F8528: mov     [esi+34h], ebx
0x6F852B: mov     [esi+24h], bl
0x6F852E: mov     [esi+54h], eax
0x6F8531: mov     [esi+50h], ebx
0x6F8534: mov     [esi+40h], bl
0x6F8537: mov     [esi+70h], eax
0x6F853A: mov     [esi+6Ch], ebx
0x6F853D: mov     [esi+5Ch], bl
0x6F8540: mov     ecx, [esp+60h+arg_0]
0x6F8544: cmp     ecx, ebx
0x6F8546: mov     byte ptr [esp+60h+var_4], 4
0x6F854B: jnz     short loc_6F858A
0x6F854D: push    eax; MaxCount
0x6F854E: push    offset aBadLocaleName; "bad locale name"
0x6F8553: lea     ecx, [esp+68h+var_50]
0x6F8557: mov     [esp+68h+var_38], eax
0x6F855B: mov     [esp+68h+var_3C], ebx
0x6F855F: mov     [esp+68h+var_4C], bl
0x6F8563: call    sub_414500
0x6F8568: lea     eax, [esp+60h+var_50]
0x6F856C: push    eax
0x6F856D: lea     ecx, [esp+64h+var_34]
0x6F8571: mov     byte ptr [esp+64h+var_4], 5
0x6F8576: call    sub_6F7DD0
0x6F857B: push    offset __TI2?AVruntime_error@std@@; throw info for 'class std::runtime_error'
0x6F8580: lea     ecx, [esp+64h+var_34]
0x6F8584: push    ecx
0x6F8585: call    ThrowException??
0x6F858A: push    ecx; char *
0x6F858B: push    esi; struct std::_Locinfo *
0x6F858C: call    ?_Locinfo_ctor@_Locinfo@std@@SAXPAV12@PBD@Z; std::_Locinfo::_Locinfo_ctor(std::_Locinfo *,char const *)
0x6F8591: add     esp, 8
0x6F8594: mov     eax, esi
0x6F8596: mov     ecx, [esp+60h+var_C]
0x6F859A: mov     large fs:0, ecx
0x6F85A1: pop     ecx
0x6F85A2: pop     esi
0x6F85A3: pop     ebx
0x6F85A4: add     esp, 54h
0x6F85A7: retn    4
