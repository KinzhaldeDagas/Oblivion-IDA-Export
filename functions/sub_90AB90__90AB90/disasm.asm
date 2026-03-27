0x90AB90: push    ebp
0x90AB91: mov     ebp, esp
0x90AB93: and     esp, 0FFFFFFF0h
0x90AB96: sub     esp, 54h
0x90AB99: mov     edx, ds:0BA9DE4h
0x90AB9F: push    ebx
0x90ABA0: push    esi
0x90ABA1: push    edi
0x90ABA2: mov     edi, ecx
0x90ABA4: mov     ecx, large fs:2Ch
0x90ABAB: mov     eax, [ecx+edx*4]
0x90ABAE: mov     esi, [eax+1A4h]
0x90ABB4: cmp     esi, [eax+1A8h]
0x90ABBA: jnb     short loc_90ABE7
0x90ABBC: mov     esi, eax
0x90ABBE: mov     ecx, [esi+1A4h]
0x90ABC4: mov     dword ptr [ecx], offset aLthkbvagent; "LthkBvAgent"
0x90ABCA: mov     dword ptr [ecx+0Ch], offset aCheckbvshape; "checkBvShape"
0x90ABD1: rdtsc
0x90ABD3: mov     [esp+60h+var_48], eax
0x90ABD7: mov     eax, [esp+60h+var_48]
0x90ABDB: mov     [ecx+4], eax
0x90ABDE: add     ecx, 10h
0x90ABE1: mov     [esi+1A4h], ecx
0x90ABE7: mov     eax, [ebp+arg_0]
0x90ABEA: mov     ecx, [eax+8]
0x90ABED: mov     esi, [eax]
0x90ABEF: mov     ebx, [ebp+arg_8]
0x90ABF2: mov     [esp+60h+var_38], ecx
0x90ABF6: mov     [esp+60h+var_34], eax
0x90ABFA: mov     edx, [eax+4]
0x90ABFD: mov     ecx, [esi+0Ch]
0x90AC00: mov     [esp+60h+var_3C], edx
0x90AC04: lea     edx, [esp+60h+var_30]
0x90AC08: push    edx
0x90AC09: push    edx
0x90AC0A: mov     edx, [ebp+arg_4]
0x90AC0D: push    ebx
0x90AC0E: mov     [esp+6Ch+var_40], ecx
0x90AC12: mov     ecx, [edi+0Ch]
0x90AC15: push    edx
0x90AC16: lea     edx, [esp+70h+var_40]
0x90AC1A: mov     [esp+70h+var_30], offset off_A9BB8C
0x90AC22: mov     [esp+70h+var_28], 0
0x90AC27: mov     [esp+70h+var_4], 7F7FFFFFh
0x90AC2F: mov     [esp+70h+var_2C], 7F7FFFFFh
0x90AC37: mov     eax, [ecx]
0x90AC39: push    edx
0x90AC3A: call    dword ptr [eax+10h]
0x90AC3D: mov     al, [esp+60h+var_28]
0x90AC41: test    al, al
0x90AC43: jz      loc_90AD34
0x90AC49: mov     ecx, large fs:2Ch
0x90AC50: mov     eax, ds:0BA9DE4h
0x90AC55: mov     eax, [ecx+eax*4]
0x90AC58: mov     edx, [eax+1A4h]
0x90AC5E: cmp     edx, [eax+1A8h]
0x90AC64: jnb     short loc_90AC98
0x90AC66: mov     eax, ds:0BA9DE4h
0x90AC6B: mov     eax, [ecx+eax*4]
0x90AC6E: mov     ecx, [eax+1A4h]
0x90AC74: mov     [esp+60h+var_44], eax
0x90AC78: mov     dword ptr [ecx], offset aStchild; "Stchild"
0x90AC7E: rdtsc
0x90AC80: mov     [esp+60h+var_48], eax
0x90AC84: mov     edx, [esp+60h+var_48]
0x90AC88: mov     eax, [esp+60h+var_44]
0x90AC8C: mov     [ecx+4], edx
0x90AC8F: add     ecx, 0Ch
0x90AC92: mov     [eax+1A4h], ecx
0x90AC98: mov     edx, [esp+60h+var_34]
0x90AC9C: mov     eax, [edx+4]
0x90AC9F: mov     ecx, [esi+10h]
0x90ACA2: mov     [esp+60h+var_3C], eax
0x90ACA6: mov     eax, [edi+10h]
0x90ACA9: test    eax, eax
0x90ACAB: mov     [esp+60h+var_40], ecx
0x90ACAF: jnz     short loc_90AD16
0x90ACB1: mov     edx, [edi+8]
0x90ACB4: mov     eax, [ebx]
0x90ACB6: mov     [esp+60h+var_44], edx
0x90ACBA: mov     edx, [ecx]
0x90ACBC: mov     [esp+60h+var_48], eax
0x90ACC0: call    dword ptr [edx+8]
0x90ACC3: mov     esi, eax
0x90ACC5: mov     eax, [ebp+arg_4]
0x90ACC8: mov     ecx, [eax]
0x90ACCA: mov     edx, [ecx]
0x90ACCC: call    dword ptr [edx+8]
0x90ACCF: mov     cl, [ebx+0Ch]
0x90ACD2: test    cl, cl
0x90ACD4: mov     ecx, [esp+60h+var_48]
0x90ACD8: jz      short loc_90ACE2
0x90ACDA: add     ecx, 590h
0x90ACE0: jmp     short loc_90ACE8
0x90ACE2: add     ecx, 190h
0x90ACE8: mov     edx, [esp+60h+var_44]
0x90ACEC: shl     esi, 5
0x90ACEF: add     esi, ecx
0x90ACF1: movzx   eax, byte ptr [esi+eax]
0x90ACF5: mov     ecx, [esp+60h+var_48]
0x90ACF9: push    edx
0x90ACFA: lea     eax, [eax+eax*4]
0x90ACFD: mov     eax, [ecx+eax*4+990h]
0x90AD04: mov     ecx, [ebp+arg_4]
0x90AD07: push    ebx
0x90AD08: push    ecx
0x90AD09: lea     edx, [esp+6Ch+var_40]
0x90AD0D: push    edx
0x90AD0E: call    eax
0x90AD10: add     esp, 10h
0x90AD13: mov     [edi+10h], eax
0x90AD16: mov     ecx, [ebp+arg_10]
0x90AD19: mov     edx, [ebp+arg_C]
0x90AD1C: mov     edi, [edi+10h]
0x90AD1F: mov     eax, [edi]
0x90AD21: push    ecx
0x90AD22: mov     ecx, [ebp+arg_4]
0x90AD25: push    edx
0x90AD26: push    ebx
0x90AD27: push    ecx
0x90AD28: lea     edx, [esp+70h+var_40]
0x90AD2C: push    edx
0x90AD2D: mov     ecx, edi
0x90AD2F: call    dword ptr [eax+10h]
0x90AD32: jmp     short loc_90AD47
0x90AD34: mov     ecx, [edi+10h]
0x90AD37: test    ecx, ecx
0x90AD39: jz      short loc_90AD47
0x90AD3B: mov     eax, [ecx]
0x90AD3D: call    dword ptr [eax+18h]
0x90AD40: mov     dword ptr [edi+10h], 0
0x90AD47: mov     ecx, large fs:2Ch
0x90AD4E: mov     edx, ds:0BA9DE4h
0x90AD54: mov     eax, [ecx+edx*4]
0x90AD57: mov     esi, [eax+1A4h]
0x90AD5D: cmp     esi, [eax+1A8h]
0x90AD63: jnb     short loc_90AD89
0x90AD65: mov     esi, eax
0x90AD67: mov     ecx, [esi+1A4h]
0x90AD6D: mov     dword ptr [ecx], offset aLt_0; "lt"
0x90AD73: rdtsc
0x90AD75: mov     [esp+60h+var_44], eax
0x90AD79: mov     edx, [esp+60h+var_44]
0x90AD7D: mov     [ecx+4], edx
0x90AD80: add     ecx, 0Ch
0x90AD83: mov     [esi+1A4h], ecx
0x90AD89: pop     edi
0x90AD8A: pop     esi
0x90AD8B: pop     ebx
0x90AD8C: mov     esp, ebp
0x90AD8E: pop     ebp
0x90AD8F: retn    14h
