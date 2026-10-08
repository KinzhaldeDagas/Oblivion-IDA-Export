0x683980: push    0FFFFFFFFh
0x683982: push    offset ??1PathBuilder@@UAE@XZ_SEH
0x683987: mov     eax, large fs:0
0x68398D: push    eax
0x68398E: push    ecx
0x68398F: push    esi
0x683990: mov     eax, ds:0B30AACh
0x683995: xor     eax, esp
0x683997: push    eax
0x683998: lea     eax, [esp+18h+var_C]
0x68399C: mov     large fs:0, eax
0x6839A2: mov     esi, ecx
0x6839A4: mov     [esp+18h+var_10], esi
0x6839A8: mov     dword ptr [esi], offset ??_7PathBuilder@@6B@
0x6839AE: mov     [esp+18h+var_4], 3
0x6839B6: call    sub_683500
0x6839BB: lea     ecx, [esi+30h]
0x6839BE: mov     byte ptr [esp+18h+var_4], 2
0x6839C3: call    ??1?$NiTPointerMap@PAVActor@@PAUPathingData@@@@UAE@XZ
0x6839C8: lea     ecx, [esi+20h]
0x6839CB: mov     byte ptr [esp+18h+var_4], 1
0x6839D0: call    ??1?$NiTPointerMap@PAVActor@@PAUPathingData@@@@UAE@XZ
0x6839D5: lea     ecx, [esi+10h]
0x6839D8: mov     byte ptr [esp+18h+var_4], 0
0x6839DD: call    ??1?$NiTPointerMap@PAVActor@@PAUPathingData@@@@UAE@XZ
0x6839E2: mov     ecx, esi; this
0x6839E4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6839EC: call    ??1BackgroundLoader@@UAE@XZ
0x6839F1: mov     ecx, [esp+18h+var_C]
0x6839F5: mov     large fs:0, ecx
0x6839FC: pop     ecx
0x6839FD: pop     esi
0x6839FE: add     esp, 10h
0x683A01: retn
0x9C4DE0: mov     ecx, [ebp-10h]; this
0x9C4DE3: jmp     ??1BackgroundLoader@@UAE@XZ
0x9C4DE8: mov     ecx, [ebp-10h]
0x9C4DEB: add     ecx, 10h
0x9C4DEE: jmp     ??1?$NiTPointerMap@PAVActor@@PAUPathingData@@@@UAE@XZ
0x9C4DF3: mov     ecx, [ebp-10h]
0x9C4DF6: add     ecx, 20h ; ' '
0x9C4DF9: jmp     ??1?$NiTPointerMap@PAVActor@@PAUPathingData@@@@UAE@XZ
0x9C4DFE: mov     ecx, [ebp-10h]
0x9C4E01: add     ecx, 30h ; '0'
0x9C4E04: jmp     ??1?$NiTPointerMap@PAVActor@@PAUPathingData@@@@UAE@XZ
0x9C4E09: mov     edx, [esp+arg_4]
0x9C4E0D: lea     eax, [edx-8]
0x9C4E10: mov     ecx, [edx-0Ch]
0x9C4E13: xor     ecx, eax
0x9C4E15: call    @__security_check_cookie@4
0x9C4E1A: mov     eax, offset stru_AED6AC
0x9C4E1F: jmp     ___CxxFrameHandler3
