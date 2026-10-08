0x4D41A0: push    0FFFFFFFFh
0x4D41A2: push    offset SEH_4D41A0
0x4D41A7: mov     eax, large fs:0
0x4D41AD: push    eax
0x4D41AE: sub     esp, 8
0x4D41B1: push    esi
0x4D41B2: push    edi
0x4D41B3: mov     eax, ds:0B30AACh
0x4D41B8: xor     eax, esp
0x4D41BA: push    eax
0x4D41BB: lea     eax, [esp+20h+var_C]
0x4D41BF: mov     large fs:0, eax
0x4D41C5: mov     [esp+20h+var_10], 0
0x4D41CD: mov     esi, [esp+20h+arg_0]
0x4D41D1: mov     dword ptr [esi], 0
0x4D41D7: test    byte ptr [ecx+24h], 1
0x4D41DB: mov     [esp+20h+var_4], 0
0x4D41E3: mov     [esp+20h+var_10], 1
0x4D41EB: jnz     short loc_4D4239
0x4D41ED: lea     eax, [esp+20h+var_14]
0x4D41F1: push    eax
0x4D41F2: call    sub_4D06C0; Cell canopy shadow capture path; sets SpeedTree singleton +0x23, updates wind/time via 0x55FA50, renders shadow texture, then restores state.
0x4D41F7: mov     ecx, [esp+20h+var_14]; this
0x4D41FB: mov     [esp+20h+var_4], 1
0x4D4203: call    BSRenderedTexture__GetInnerTexture
0x4D4208: push    eax; a2
0x4D4209: mov     ecx, esi; this
0x4D420B: call    NiSmartPointer_Set??
0x4D4210: mov     edi, [esp+20h+var_14]
0x4D4214: test    edi, edi
0x4D4216: mov     byte ptr [esp+20h+var_4], 0
0x4D421B: jz      short loc_4D4239
0x4D421D: lea     ecx, [edi+4]
0x4D4220: push    ecx; lpAddend
0x4D4221: call    dword ptr ds:0A2807Ch
0x4D4227: test    eax, eax
0x4D4229: jnz     short loc_4D4239
0x4D422B: test    edi, edi
0x4D422D: jz      short loc_4D4239
0x4D422F: mov     edx, [edi]
0x4D4231: mov     eax, [edx]
0x4D4233: push    1
0x4D4235: mov     ecx, edi
0x4D4237: call    eax
0x4D4239: mov     eax, esi
0x4D423B: mov     ecx, dword ptr [esp+20h+var_C]
0x4D423F: mov     large fs:0, ecx
0x4D4246: pop     ecx
0x4D4247: pop     edi
0x4D4248: pop     esi
0x4D4249: add     esp, 14h
0x4D424C: retn    4
0x9B56D0: mov     eax, [ebp-10h]
0x9B56D3: and     eax, 1
0x9B56D6: jz      locret_9B56E8
0x9B56DC: and     dword ptr [ebp-10h], 0FFFFFFFEh
0x9B56E0: mov     ecx, [ebp+4]; slot
0x9B56E3: jmp     NiPointerSlot_Release
0x9B56E8: retn
0x9B56E9: lea     ecx, [ebp-14h]; slot
0x9B56EC: jmp     NiPointerSlot_Release
0x9B56F1: mov     edx, [esp+arg_4]
0x9B56F5: lea     eax, [edx-10h]
0x9B56F8: mov     ecx, [edx-14h]
0x9B56FB: xor     ecx, eax
0x9B56FD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5702: mov     eax, offset stru_AE0780
0x9B5707: jmp     ___CxxFrameHandler3
