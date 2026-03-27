0x7A28E0: push    0FFFFFFFFh
0x7A28E2: push    offset SEH_7A28E0
0x7A28E7: mov     eax, large fs:0
0x7A28ED: push    eax
0x7A28EE: sub     esp, 44h
0x7A28F1: push    esi
0x7A28F2: push    edi
0x7A28F3: mov     eax, ds:0B30AACh
0x7A28F8: xor     eax, esp
0x7A28FA: push    eax
0x7A28FB: lea     eax, [esp+5Ch+var_C]
0x7A28FF: mov     large fs:0, eax
0x7A2905: mov     edi, ecx
0x7A2907: mov     esi, [esp+5Ch+arg_0]
0x7A290B: mov     ecx, esi
0x7A290D: call    sub_78EB40
0x7A2912: add     eax, 0FFFFDCD1h; switch 8 cases
0x7A2917: cmp     eax, 7
0x7A291A: ja      def_7A2920; jumptable 007A2920 default case, case 9009
0x7A2920: jmp     ds:jpt_7A2920[eax*4]; switch jump
0x7A2927: mov     ecx, esi; jumptable 007A2920 case 9007
0x7A2929: call    sub_78EB40
0x7A292E: mov     [edi+70h], eax
0x7A2931: jmp     short loc_7A29AA
0x7A2933: mov     ecx, esi; jumptable 007A2920 case 9008
0x7A2935: call    sub_78EB10
0x7A293A: fstp    dword ptr [edi+0DCh]
0x7A2940: jmp     short loc_7A29AA
0x7A2942: mov     ecx, esi; jumptable 007A2920 case 9010
0x7A2944: call    sub_78EB10
0x7A2949: fstp    [esp+5Ch+arg_0]
0x7A294D: fld     [esp+5Ch+arg_0]
0x7A2951: fst     dword ptr [edi+0E4h]
0x7A2957: fldz
0x7A2959: fucompp
0x7A295B: fnstsw  ax
0x7A295D: test    ah, 44h
0x7A2960: jp      short loc_7A29AA
0x7A2962: fld     dword ptr ds:0A2FAACh
0x7A2968: fstp    dword ptr [edi+0E4h]
0x7A296E: jmp     short loc_7A29AA
0x7A2970: mov     ecx, esi; jumptable 007A2920 case 9011
0x7A2972: call    sub_78EB40
0x7A2977: mov     [edi+0C0h], eax
0x7A297D: jmp     short loc_7A29AA
0x7A297F: mov     ecx, esi; jumptable 007A2920 case 9012
0x7A2981: call    sub_78EB10
0x7A2986: fstp    dword ptr [edi+0E0h]
0x7A298C: jmp     short loc_7A29AA
0x7A298E: mov     ecx, esi; jumptable 007A2920 case 9013
0x7A2990: call    sub_78EB10
0x7A2995: fstp    dword ptr [edi+0E8h]
0x7A299B: jmp     short loc_7A29AA
0x7A299D: mov     ecx, esi; jumptable 007A2920 case 9014
0x7A299F: call    sub_78EB10
0x7A29A4: fstp    dword ptr [edi+0ECh]
0x7A29AA: mov     ecx, esi
0x7A29AC: call    sub_78EB40
0x7A29B1: cmp     eax, 232Eh
0x7A29B6: jnz     loc_7A2912
0x7A29BC: mov     ecx, [esp+5Ch+var_C]
0x7A29C0: mov     large fs:0, ecx
0x7A29C7: pop     ecx
0x7A29C8: pop     edi
0x7A29C9: pop     esi
0x7A29CA: add     esp, 50h
0x7A29CD: retn    4
0x7A29D0: push    19h; jumptable 007A2920 default case, case 9009
0x7A29D2: push    offset aMalformedEngin; "malformed engine lod data"
0x7A29D7: lea     ecx, [esp+64h+var_50]
0x7A29DB: mov     [esp+64h+var_38], 0Fh
0x7A29E3: mov     [esp+64h+var_3C], 0
0x7A29EB: mov     [esp+64h+var_4C], 0
0x7A29F0: call    sub_414500
0x7A29F5: push    0
0x7A29F7: lea     eax, [esp+60h+var_50]
0x7A29FB: push    eax
0x7A29FC: lea     ecx, [esp+64h+var_34]
0x7A2A00: mov     [esp+64h+var_4], 0
0x7A2A08: call    sub_789190
0x7A2A0D: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A2A12: lea     ecx, [esp+60h+var_34]
0x7A2A16: push    ecx
0x7A2A17: call    ThrowException??
