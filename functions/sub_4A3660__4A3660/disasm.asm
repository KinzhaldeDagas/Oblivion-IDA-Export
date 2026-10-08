0x4A3660: push    0FFFFFFFFh
0x4A3662: push    offset ??1TESRegionDataLandscape@@UAE@XZ_SEH
0x4A3667: mov     eax, large fs:0
0x4A366D: push    eax
0x4A366E: push    ecx
0x4A366F: push    esi
0x4A3670: push    edi
0x4A3671: mov     eax, ds:0B30AACh
0x4A3676: xor     eax, esp
0x4A3678: push    eax
0x4A3679: lea     eax, [esp+1Ch+var_C]
0x4A367D: mov     large fs:0, eax
0x4A3683: mov     esi, ecx
0x4A3685: mov     [esp+1Ch+var_10], esi
0x4A3689: mov     edi, [esp+1Ch+arg_0]
0x4A368D: push    edi
0x4A368E: call    sub_4A34E0
0x4A3693: mov     dword ptr [esi], offset ??_7TESRegionDataGrass@@6B@; const TESRegionDataGrass::`vftable'
0x4A3699: mov     ecx, [edi+8]
0x4A369C: push    0
0x4A369E: mov     [esp+20h+var_4], 0
0x4A36A6: call    sub_4A6120
0x4A36AB: mov     [esi+8], eax
0x4A36AE: mov     eax, esi
0x4A36B0: mov     ecx, [esp+1Ch+var_C]
0x4A36B4: mov     large fs:0, ecx
0x4A36BB: pop     ecx
0x4A36BC: pop     edi
0x4A36BD: pop     esi
0x4A36BE: add     esp, 10h
0x4A36C1: retn    4
0x9B2890: mov     ecx, [ebp-10h]
0x9B2893: jmp     TESRegionData_SetBaseVTable
0x9B2898: mov     edx, [esp+arg_4]
0x9B289C: lea     eax, [edx-0Ch]
0x9B289F: mov     ecx, [edx-10h]
0x9B28A2: xor     ecx, eax
0x9B28A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B28A9: mov     eax, offset stru_ADE820
0x9B28AE: jmp     ___CxxFrameHandler3
