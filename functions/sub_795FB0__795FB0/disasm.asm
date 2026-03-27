0x795FB0: push    0FFFFFFFFh
0x795FB2: push    offset SEH_795FB0
0x795FB7: mov     eax, large fs:0
0x795FBD: push    eax
0x795FBE: push    ecx
0x795FBF: mov     eax, ds:0B30AACh
0x795FC4: xor     eax, esp
0x795FC6: push    eax
0x795FC7: lea     eax, [esp+14h+var_C]
0x795FCB: mov     large fs:0, eax
0x795FD1: mov     eax, ecx
0x795FD3: mov     cl, byte ptr [esp+14h+arg_4]
0x795FD7: mov     edx, [esp+14h+arg_0]
0x795FDB: mov     [eax], cl
0x795FDD: xor     ecx, ecx
0x795FDF: mov     [eax+4], edx
0x795FE2: mov     [eax+8], cl
0x795FE5: mov     [eax+9], cl
0x795FE8: mov     [eax+0Ch], ecx
0x795FEB: mov     [eax+10h], cx
0x795FEF: mov     byte ptr [eax+12h], 1
0x795FF3: mov     dword ptr [eax+14h], 2
0x795FFA: mov     [eax+20h], cx
0x795FFE: mov     [eax+22h], cx
0x796002: mov     [eax+24h], cx
0x796006: mov     [eax+26h], cx
0x79600A: mov     [eax+2Ch], ecx
0x79600D: mov     [eax+30h], ecx
0x796010: mov     [eax+34h], ecx
0x796013: mov     [eax+3Ch], ecx
0x796016: mov     [eax+40h], ecx
0x796019: mov     [eax+44h], ecx
0x79601C: mov     [eax+4Ch], ecx
0x79601F: mov     [eax+50h], ecx
0x796022: mov     [eax+54h], ecx
0x796025: mov     [eax+5Ch], ecx
0x796028: mov     [eax+60h], ecx
0x79602B: mov     [eax+64h], ecx
0x79602E: mov     [eax+6Ch], ecx
0x796031: mov     [eax+70h], ecx
0x796034: mov     [eax+74h], ecx
0x796037: mov     [eax+7Ch], ecx
0x79603A: mov     [eax+80h], ecx
0x796040: mov     [eax+84h], ecx
0x796046: mov     [eax+8Ch], ecx
0x79604C: mov     [eax+90h], ecx
0x796052: mov     [eax+94h], ecx
0x796058: mov     [eax+9Ch], ecx
0x79605E: mov     [eax+0A0h], ecx
0x796064: mov     [eax+0A4h], ecx
0x79606A: mov     [eax+0ACh], ecx
0x796070: mov     [eax+0B0h], ecx
0x796076: mov     [eax+0B4h], ecx
0x79607C: mov     [eax+0BCh], ecx
0x796082: mov     [eax+0C0h], ecx
0x796088: mov     [eax+0C4h], ecx
0x79608E: mov     [eax+0CCh], ecx
0x796094: mov     [eax+0D0h], ecx
0x79609A: mov     [eax+0D4h], ecx
0x7960A0: mov     [eax+0DCh], ecx
0x7960A6: mov     [eax+0E0h], ecx
0x7960AC: mov     [eax+0E4h], ecx
0x7960B2: mov     [eax+0ECh], ecx
0x7960B8: mov     [eax+0F0h], ecx
0x7960BE: mov     [eax+0F4h], ecx
0x7960C4: mov     [eax+0FCh], ecx
0x7960CA: mov     [eax+100h], ecx
0x7960D0: mov     [eax+104h], ecx
0x7960D6: mov     [eax+10Ch], ecx
0x7960DC: mov     [eax+110h], ecx
0x7960E2: mov     [eax+114h], ecx
0x7960E8: mov     ecx, [esp+14h+var_C]
0x7960EC: mov     large fs:0, ecx
0x7960F3: pop     ecx
0x7960F4: add     esp, 10h
0x7960F7: retn    8
