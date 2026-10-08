0x68B320: push    0FFFFFFFFh
0x68B322: push    offset ??1PathMiddleHigh@@UAE@XZ_SEH
0x68B327: mov     eax, large fs:0
0x68B32D: push    eax
0x68B32E: push    ecx
0x68B32F: push    esi
0x68B330: push    edi
0x68B331: mov     eax, ds:0B30AACh
0x68B336: xor     eax, esp
0x68B338: push    eax
0x68B339: lea     eax, [esp+1Ch+var_C]
0x68B33D: mov     large fs:0, eax
0x68B343: mov     esi, ecx
0x68B345: mov     [esp+1Ch+var_10], esi
0x68B349: mov     dword ptr [esi], offset ??_7PathMiddleHigh@@6B@; const PathMiddleHigh::`vftable'
0x68B34F: lea     edi, [esi+14h]
0x68B352: mov     ecx, edi
0x68B354: mov     [esp+1Ch+var_4], 1
0x68B35C: call    sub_68C6E0
0x68B361: mov     ecx, edi
0x68B363: mov     byte ptr [esp+1Ch+var_4], 0
0x68B368: call    sub_68C9B0
0x68B36D: mov     ecx, esi; this
0x68B36F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x68B377: call    PathLow_dtor; Verified PathLow destructor: restores the PathLow vtable and frees/clears owned TravelPathNode records through TravelPath_ClearNodes. This routine does not free the containing object.
0x68B37C: mov     ecx, [esp+1Ch+var_C]
0x68B380: mov     large fs:0, ecx
0x68B387: pop     ecx
0x68B388: pop     edi
0x68B389: pop     esi
0x68B38A: add     esp, 10h
0x68B38D: retn
0x9C5320: mov     ecx, [ebp-10h]; this
0x9C5323: jmp     PathLow_dtor; Verified PathLow destructor: restores the PathLow vtable and frees/clears owned TravelPathNode records through TravelPath_ClearNodes. This routine does not free the containing object.
0x9C5328: mov     ecx, [ebp-10h]
0x9C532B: add     ecx, 14h
0x9C532E: jmp     sub_68C9B0
0x9C5333: mov     edx, [esp+arg_4]
0x9C5337: lea     eax, [edx-0Ch]
0x9C533A: mov     ecx, [edx-10h]
0x9C533D: xor     ecx, eax
0x9C533F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5344: mov     eax, offset stru_AEDB1C
0x9C5349: jmp     ___CxxFrameHandler3
