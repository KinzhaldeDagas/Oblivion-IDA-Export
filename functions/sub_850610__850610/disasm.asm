0x850610: push    0FFFFFFFFh
0x850612: push    offset SEH_850610
0x850617: mov     eax, large fs:0
0x85061D: push    eax
0x85061E: push    ebx
0x85061F: push    esi
0x850620: push    edi
0x850621: mov     eax, ds:0B30AACh
0x850626: xor     eax, esp
0x850628: push    eax
0x850629: lea     eax, [esp+1Ch+var_C]
0x85062D: mov     large fs:0, eax
0x850633: mov     esi, ecx
0x850635: mov     eax, [esp+1Ch+arg_8]
0x850639: mov     eax, [eax+0Ch]
0x85063C: push    eax
0x85063D: call    sub_848E50
0x850642: mov     eax, ds:0B45BE0h
0x850647: test    eax, eax
0x850649: mov     edi, eax
0x85064B: mov     [esp+1Ch+arg_8], edi
0x85064F: mov     ebx, 1
0x850654: jz      short loc_850659
0x850656: add     [eax+60h], ebx
0x850659: mov     edx, [esi+38h]
0x85065C: lea     ecx, [esp+1Ch+arg_8]
0x850660: push    ecx
0x850661: push    edx
0x850662: lea     ecx, [esi+40h]
0x850665: mov     [esp+24h+var_4], 0
0x85066D: call    sub_76CE40
0x850672: or      eax, 0FFFFFFFFh
0x850675: test    edi, edi
0x850677: mov     [esp+1Ch+var_4], eax
0x85067B: jz      short loc_850689
0x85067D: add     [edi+60h], eax
0x850680: jnz     short loc_850689
0x850682: mov     ecx, edi
0x850684: call    sub_7604D0
0x850689: add     [esi+38h], ebx
0x85068C: mov     ecx, [esp+1Ch+var_C]
0x850690: mov     large fs:0, ecx
0x850697: pop     ecx
0x850698: pop     edi
0x850699: pop     esi
0x85069A: pop     ebx
0x85069B: add     esp, 0Ch
0x85069E: retn    10h
