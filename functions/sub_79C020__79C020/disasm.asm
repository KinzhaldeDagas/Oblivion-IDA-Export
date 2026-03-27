0x79C020: sub     esp, 8
0x79C023: mov     edx, [esp+8+arg_8]
0x79C027: push    ebx
0x79C028: mov     ebx, [esp+0Ch+arg_0]
0x79C02C: push    esi
0x79C02D: mov     esi, [esp+10h+arg_4]
0x79C031: push    edi
0x79C032: mov     edi, [esp+14h+arg_8]
0x79C036: xor     al, al
0x79C038: mov     byte ptr [esp+14h+var_4], al
0x79C03C: mov     ecx, [esp+14h+var_4]
0x79C040: mov     byte ptr [esp+14h+var_8], al
0x79C044: mov     eax, [esp+14h+var_8]
0x79C048: push    eax
0x79C049: push    ecx
0x79C04A: push    edx
0x79C04B: push    edi
0x79C04C: push    esi
0x79C04D: push    ebx
0x79C04E: call    sub_79B860
0x79C053: sub     esi, ebx
0x79C055: mov     eax, 2AAAAAABh
0x79C05A: imul    esi
0x79C05C: sar     edx, 3
0x79C05F: mov     eax, edx
0x79C061: shr     eax, 1Fh
0x79C064: add     eax, edx
0x79C066: lea     eax, [eax+eax*2]
0x79C069: shl     eax, 4
0x79C06C: add     esp, 18h
0x79C06F: mov     ecx, eax
0x79C071: mov     eax, edi
0x79C073: pop     edi
0x79C074: pop     esi
0x79C075: sub     eax, ecx
0x79C077: pop     ebx
0x79C078: add     esp, 8
0x79C07B: retn
