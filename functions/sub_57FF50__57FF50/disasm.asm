0x57FF50: sub     esp, 408h
0x57FF56: mov     eax, ds:0B30AACh
0x57FF5B: xor     eax, esp
0x57FF5D: mov     [esp+408h+var_4], eax
0x57FF64: push    ebp
0x57FF65: mov     ebp, ecx
0x57FF67: cmp     byte ptr [ebp+0], 0
0x57FF6B: jz      loc_5800D7
0x57FF71: movzx   eax, word ptr [ebp+1Ch]
0x57FF75: cmp     ax, 0FFFFh
0x57FF79: push    ebx
0x57FF7A: lea     ebx, [ebp+18h]
0x57FF7D: mov     [esp+410h+var_408], ebx
0x57FF81: jnz     short loc_57FF95
0x57FF83: mov     eax, [ebx]
0x57FF85: lea     edx, [eax+1]
0x57FF88: mov     cl, [eax]
0x57FF8A: add     eax, 1
0x57FF8D: test    cl, cl
0x57FF8F: jnz     short loc_57FF88
0x57FF91: sub     eax, edx
0x57FF93: jmp     short loc_57FF98
0x57FF95: movzx   eax, ax
0x57FF98: test    eax, eax
0x57FF9A: jnz     short loc_57FFA2
0x57FF9C: mov     [esp+410h+a2], al
0x57FFA0: jmp     short loc_57FFBC
0x57FFA2: mov     eax, [ebx]
0x57FFA4: lea     edx, [esp+410h+a2]
0x57FFA8: sub     edx, eax
0x57FFAA: lea     ebx, [ebx+0]
0x57FFB0: mov     cl, [eax]
0x57FFB2: mov     [edx+eax], cl
0x57FFB5: add     eax, 1
0x57FFB8: test    cl, cl
0x57FFBA: jnz     short loc_57FFB0
0x57FFBC: movzx   eax, word ptr [ebx+4]
0x57FFC0: cmp     ax, 0FFFFh
0x57FFC4: jnz     short loc_57FFDD
0x57FFC6: mov     eax, [ebx]
0x57FFC8: lea     edx, [eax+1]
0x57FFCB: jmp     short loc_57FFD0
0x57FFCD: align 10h
0x57FFD0: mov     cl, [eax]
0x57FFD2: add     eax, 1
0x57FFD5: test    cl, cl
0x57FFD7: jnz     short loc_57FFD0
0x57FFD9: sub     eax, edx
0x57FFDB: jmp     short loc_57FFE0
0x57FFDD: movzx   eax, ax
0x57FFE0: mov     edx, [esp+410h+arg_0]
0x57FFE7: lea     ecx, [edx+80000000h]; switch 11 cases
0x57FFED: cmp     ecx, 0Ah
0x57FFF0: push    esi
0x57FFF1: push    edi
0x57FFF2: ja      def_57FFF8; jumptable 0057FFF8 default case, cases -2147483645,-2147483644
0x57FFF8: jmp     ds:jpt_57FFF8[ecx*4]; switch jump
0x57FFFF: mov     ecx, [ebp+4]; jumptable 0057FFF8 case -2147483648
0x580002: test    ecx, ecx
0x580004: jle     loc_5800D4; jumptable 0057FFF8 cases -2147483639,-2147483638
0x58000A: lea     edx, [ecx-1]
0x58000D: cmp     edx, eax
0x58000F: jge     short loc_58001F
0x580011: mov     ecx, eax
0x580013: lea     edi, [esp+edx+418h+a2]
0x580017: lea     esi, [esp+edx+418h+var_403]
0x58001B: sub     ecx, edx
0x58001D: rep movsb
0x58001F: mov     [ebp+4], edx
0x580022: mov     byte ptr [esp+eax+418h+var_408+3], 0
0x580027: jmp     loc_5800C6
0x58002C: mov     edx, [ebp+4]; jumptable 0057FFF8 case -2147483641
0x58002F: cmp     edx, eax
0x580031: jge     loc_5800D4; jumptable 0057FFF8 cases -2147483639,-2147483638
0x580037: mov     ecx, eax
0x580039: sub     ecx, edx
0x58003B: lea     edi, [esp+edx+418h+a2]
0x58003F: lea     esi, [esp+edx+418h+var_403]
0x580043: rep movsb
0x580045: push    0
0x580047: lea     ecx, [esp+41Ch+a2]
0x58004B: mov     byte ptr [esp+eax+41Ch+var_408+3], 0
0x580050: push    ecx
0x580051: jmp     short loc_5800CD
0x580053: mov     eax, [ebp+4]; jumptable 0057FFF8 case -2147483647
0x580056: test    eax, eax
0x580058: jle     short loc_5800D4; jumptable 0057FFF8 cases -2147483639,-2147483638
0x58005A: add     eax, 0FFFFFFFFh
0x58005D: mov     [ebp+4], eax; jumptable 0057FFF8 case -2147483642
0x580060: jmp     short loc_5800D4; jumptable 0057FFF8 cases -2147483639,-2147483638
0x580062: mov     ecx, [ebp+4]; jumptable 0057FFF8 case -2147483646
0x580065: cmp     ecx, eax
0x580067: jge     short loc_5800D4; jumptable 0057FFF8 cases -2147483639,-2147483638
0x580069: add     ecx, 1
0x58006C: mov     [ebp+4], ecx
0x58006F: jmp     short loc_5800D4; jumptable 0057FFF8 cases -2147483639,-2147483638
0x580071: mov     dword ptr [ebp+4], 0; jumptable 0057FFF8 case -2147483643
0x580078: jmp     short loc_5800D4; jumptable 0057FFF8 cases -2147483639,-2147483638
0x58007A: mov     byte ptr [ebp+0], 0; jumptable 0057FFF8 case -2147483640
0x58007E: jmp     short loc_5800D4; jumptable 0057FFF8 cases -2147483639,-2147483638
0x580080: cmp     eax, [ebp+4]; jumptable 0057FFF8 default case, cases -2147483645,-2147483644
0x580083: mov     ecx, eax
0x580085: jle     short loc_5800A3
0x580087: mov     esi, [ebp+4]
0x58008A: lea     ebx, [ebx+0]
0x580090: mov     bl, byte ptr [esp+ecx+418h+var_408+3]
0x580094: mov     [esp+ecx+418h+a2], bl
0x580098: sub     ecx, 1
0x58009B: cmp     ecx, esi
0x58009D: jg      short loc_580090
0x58009F: mov     ebx, [esp+418h+var_408]
0x5800A3: cmp     dword ptr [ebp+0Ch], 0FFFFFFFFh
0x5800A7: mov     [esp+ecx+418h+a2], dl
0x5800AB: mov     [esp+eax+418h+var_403], 0
0x5800B0: jz      short loc_5800C2
0x5800B2: lea     edx, [esp+418h+a2]
0x5800B6: push    edx
0x5800B7: mov     ecx, ebp
0x5800B9: call    sub_57DE00
0x5800BE: test    al, al
0x5800C0: jz      short loc_5800D4; jumptable 0057FFF8 cases -2147483639,-2147483638
0x5800C2: add     dword ptr [ebp+4], 1
0x5800C6: push    0; a3
0x5800C8: lea     eax, [esp+41Ch+a2]
0x5800CC: push    eax; a2
0x5800CD: mov     ecx, ebx; this
0x5800CF: call    BSStringT_Set
0x5800D4: pop     edi; jumptable 0057FFF8 cases -2147483639,-2147483638
0x5800D5: pop     esi
0x5800D6: pop     ebx
0x5800D7: mov     ecx, [esp+40Ch+var_4]
0x5800DE: pop     ebp
0x5800DF: xor     ecx, esp
0x5800E1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5800E6: add     esp, 408h
0x5800EC: retn    4
