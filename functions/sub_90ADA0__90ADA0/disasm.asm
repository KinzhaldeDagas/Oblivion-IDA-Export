0x90ADA0: push    ebp
0x90ADA1: mov     ebp, esp
0x90ADA3: and     esp, 0FFFFFFF0h
0x90ADA6: sub     esp, 54h
0x90ADA9: mov     ecx, large fs:2Ch
0x90ADB0: mov     edx, ds:0BA9DE4h
0x90ADB6: mov     eax, [ecx+edx*4]
0x90ADB9: push    ebx
0x90ADBA: push    esi
0x90ADBB: mov     esi, [eax+1A4h]
0x90ADC1: push    edi
0x90ADC2: cmp     esi, [eax+1A8h]
0x90ADC8: jnb     short loc_90ADF5
0x90ADCA: mov     esi, eax
0x90ADCC: mov     ecx, [esi+1A4h]
0x90ADD2: mov     dword ptr [ecx], offset aLthkbvagent; "LthkBvAgent"
0x90ADD8: mov     dword ptr [ecx+0Ch], offset aCheckbvshape; "checkBvShape"
0x90ADDF: rdtsc
0x90ADE1: mov     [esp+60h+var_4C], eax
0x90ADE5: mov     eax, [esp+60h+var_4C]
0x90ADE9: mov     [ecx+4], eax
0x90ADEC: add     ecx, 10h
0x90ADEF: mov     [esi+1A4h], ecx
0x90ADF5: mov     eax, [ebp+arg_0]
0x90ADF8: mov     ecx, [eax+8]
0x90ADFB: mov     ebx, [eax]
0x90ADFD: mov     [esp+60h+var_34], eax
0x90AE01: mov     [esp+60h+var_38], ecx
0x90AE05: mov     ecx, [ebx+0Ch]
0x90AE08: mov     edx, [eax+4]
0x90AE0B: mov     [esp+60h+var_3C], edx
0x90AE0F: mov     [esp+60h+var_40], ecx
0x90AE13: mov     eax, [ecx]
0x90AE15: call    dword ptr [eax+8]
0x90AE18: mov     ecx, [ebp+arg_4]
0x90AE1B: mov     ecx, [ecx]
0x90AE1D: mov     edx, [ecx]
0x90AE1F: mov     esi, eax
0x90AE21: call    dword ptr [edx+8]
0x90AE24: mov     edi, [ebp+arg_8]
0x90AE27: mov     ecx, [edi]
0x90AE29: mov     [esp+60h+var_44], eax
0x90AE2D: shl     esi, 5
0x90AE30: add     esi, ecx
0x90AE32: movzx   eax, byte ptr [esi+eax+190h]
0x90AE3A: mov     esi, [ebp+arg_4]
0x90AE3D: add     eax, 7Bh ; '{'
0x90AE40: lea     eax, [eax+eax*4]
0x90AE43: mov     ecx, [ecx+eax*4]
0x90AE46: lea     edx, [esp+60h+var_30]
0x90AE4A: push    edx
0x90AE4B: mov     eax, edx
0x90AE4D: push    eax
0x90AE4E: push    edi
0x90AE4F: lea     edx, [esp+6Ch+var_40]
0x90AE53: push    esi
0x90AE54: push    edx
0x90AE55: mov     [esp+74h+var_30], offset off_A9BB8C
0x90AE5D: mov     [esp+74h+var_28], 0
0x90AE62: mov     [esp+74h+var_4], 7F7FFFFFh
0x90AE6A: mov     [esp+74h+var_2C], 7F7FFFFFh
0x90AE72: call    ecx
0x90AE74: mov     al, [esp+74h+var_28]
0x90AE78: add     esp, 14h
0x90AE7B: test    al, al
0x90AE7D: jz      loc_90AF17
0x90AE83: mov     ecx, large fs:2Ch
0x90AE8A: mov     eax, ds:0BA9DE4h
0x90AE8F: mov     eax, [ecx+eax*4]
0x90AE92: mov     edx, [eax+1A4h]
0x90AE98: cmp     edx, [eax+1A8h]
0x90AE9E: jnb     short loc_90AED2
0x90AEA0: mov     eax, ds:0BA9DE4h
0x90AEA5: mov     eax, [ecx+eax*4]
0x90AEA8: mov     ecx, [eax+1A4h]
0x90AEAE: mov     [esp+60h+var_48], eax
0x90AEB2: mov     dword ptr [ecx], offset aStchild; "Stchild"
0x90AEB8: rdtsc
0x90AEBA: mov     [esp+60h+var_4C], eax
0x90AEBE: mov     edx, [esp+60h+var_4C]
0x90AEC2: mov     eax, [esp+60h+var_48]
0x90AEC6: mov     [ecx+4], edx
0x90AEC9: add     ecx, 0Ch
0x90AECC: mov     [eax+1A4h], ecx
0x90AED2: mov     edx, [esp+60h+var_34]
0x90AED6: mov     ecx, [ebx+10h]
0x90AED9: mov     eax, [edx+4]
0x90AEDC: mov     [esp+60h+var_3C], eax
0x90AEE0: mov     [esp+60h+var_40], ecx
0x90AEE4: mov     edx, [ecx]
0x90AEE6: call    dword ptr [edx+8]
0x90AEE9: mov     ecx, [edi]
0x90AEEB: mov     edx, [esp+60h+var_44]
0x90AEEF: shl     eax, 5
0x90AEF2: add     eax, ecx
0x90AEF4: movzx   eax, byte ptr [eax+edx+190h]
0x90AEFC: mov     edx, [ebp+arg_10]
0x90AEFF: push    edx
0x90AF00: mov     edx, [ebp+arg_C]
0x90AF03: push    edx
0x90AF04: push    edi
0x90AF05: add     eax, 7Bh ; '{'
0x90AF08: lea     edx, [esp+6Ch+var_40]
0x90AF0C: push    esi
0x90AF0D: lea     eax, [eax+eax*4]
0x90AF10: push    edx
0x90AF11: call    dword ptr [ecx+eax*4]
0x90AF14: add     esp, 14h
0x90AF17: mov     ecx, large fs:2Ch
0x90AF1E: mov     edx, ds:0BA9DE4h
0x90AF24: mov     eax, [ecx+edx*4]
0x90AF27: mov     esi, [eax+1A4h]
0x90AF2D: cmp     esi, [eax+1A8h]
0x90AF33: jnb     short loc_90AF59
0x90AF35: mov     esi, eax
0x90AF37: mov     ecx, [esi+1A4h]
0x90AF3D: mov     dword ptr [ecx], offset aLt_0; "lt"
0x90AF43: rdtsc
0x90AF45: mov     [esp+60h+var_44], eax
0x90AF49: mov     eax, [esp+60h+var_44]
0x90AF4D: mov     [ecx+4], eax
0x90AF50: add     ecx, 0Ch
0x90AF53: mov     [esi+1A4h], ecx
0x90AF59: pop     edi
0x90AF5A: pop     esi
0x90AF5B: pop     ebx
0x90AF5C: mov     esp, ebp
0x90AF5E: pop     ebp
0x90AF5F: retn
