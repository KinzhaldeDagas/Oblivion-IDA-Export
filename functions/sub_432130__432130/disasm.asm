0x432130: push    ecx
0x432131: push    esi
0x432132: push    edi
0x432133: mov     edi, [esp+0Ch+arg_0]
0x432137: mov     esi, [edi+0Ch]
0x43213A: add     edi, 0Ch
0x43213D: cmp     esi, 5; switch 6 cases
0x432140: mov     [esp+0Ch+var_4], ecx
0x432144: ja      short def_432154
0x432146: push    ebx
0x432147: mov     ebx, ds:Sleep
0x43214D: push    ebp
0x43214E: mov     ebp, ds:InterlockedCompareExchange
0x432154: jmp     ds:jpt_432154[esi*4]; switch jump
0x43215B: push    esi; jumptable 00432154 case 0
0x43215C: push    6; Exchange
0x43215E: push    edi; Destination
0x43215F: call    ebp ; InterlockedCompareExchange
0x432161: cmp     eax, esi
0x432163: jnz     short loc_4321D5
0x432165: mov     ecx, [esp+14h+arg_0]
0x432169: mov     eax, [ecx]
0x43216B: pop     ebp
0x43216C: pop     ebx
0x43216D: pop     edi
0x43216E: pop     esi
0x43216F: add     esp, 4
0x432172: mov     [esp+arg_0], 0
0x43217A: mov     edx, [eax+0Ch]
0x43217D: jmp     edx
0x43217F: push    esi; jumptable 00432154 cases 1,2
0x432180: push    6; Exchange
0x432182: push    edi; Destination
0x432183: call    ebp ; InterlockedCompareExchange
0x432185: cmp     eax, esi
0x432187: jnz     short loc_4321D5
0x432189: mov     esi, [esp+14h+arg_0]
0x43218D: mov     eax, [esi]
0x43218F: mov     edx, [eax+0Ch]
0x432192: push    0
0x432194: mov     ecx, esi
0x432196: call    edx
0x432198: mov     ecx, [esp+18h+var_8]
0x43219C: push    esi
0x43219D: call    sub_431D10
0x4321A2: pop     ebp
0x4321A3: pop     ebx
