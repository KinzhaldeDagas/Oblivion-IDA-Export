0x4A2C30: push    0FFFFFFFFh; Verified: constructs TESRegion (FormType 0x2F), allocates owned 12-byte TESRegionDataList at +0x18 (ownsData=1), allocates 8-byte region-area list head at +0x1C, zeros worldspace +0x20 and cached weather +0x24, initializes float +0x28 to flt_A30634.
0x4A2C32: push    offset ??0TESRegion@@QAE@XZ_SEH
0x4A2C37: mov     eax, large fs:0
0x4A2C3D: push    eax
0x4A2C3E: sub     esp, 8
0x4A2C41: push    ebx
0x4A2C42: push    esi
0x4A2C43: mov     eax, ds:0B30AACh
0x4A2C48: xor     eax, esp
0x4A2C4A: push    eax
0x4A2C4B: lea     eax, [esp+20h+var_C]
0x4A2C4F: mov     large fs:0, eax
0x4A2C55: mov     esi, ecx
0x4A2C57: mov     [esp+20h+var_14], esi
0x4A2C5B: call    TESForm_constr
0x4A2C60: xor     ebx, ebx
0x4A2C62: push    0Ch; Size
0x4A2C64: mov     [esp+24h+var_4], ebx
0x4A2C68: mov     dword ptr [esi], offset ??_7TESRegion@@6B@; const TESRegion::`vftable'
0x4A2C6E: call    FormHeapAlloc
0x4A2C73: add     esp, 4
0x4A2C76: mov     [esp+20h+var_10], eax
0x4A2C7A: cmp     eax, ebx
0x4A2C7C: mov     byte ptr [esp+20h+var_4], 1
0x4A2C81: jz      short loc_4A2C8E
0x4A2C83: push    1
0x4A2C85: mov     ecx, eax
0x4A2C87: call    sub_4A43E0; Verified: initializes the 12-byte TESRegionDataList header: firstData null, overflowNodes null, ownsData byte set from constructor argument.
0x4A2C8C: jmp     short loc_4A2C90
0x4A2C8E: xor     eax, eax
0x4A2C90: push    8; Size
0x4A2C92: mov     byte ptr [esp+24h+var_4], bl
0x4A2C96: mov     [esi+18h], eax
0x4A2C99: call    FormHeapAlloc
0x4A2C9E: add     esp, 4
0x4A2CA1: cmp     eax, ebx
0x4A2CA3: jz      short loc_4A2CAC
0x4A2CA5: mov     [eax], ebx
0x4A2CA7: mov     [eax+4], ebx
0x4A2CAA: jmp     short loc_4A2CAE
0x4A2CAC: xor     eax, eax
0x4A2CAE: fld     dword ptr ds:0A30634h
0x4A2CB4: mov     [esi+1Ch], eax
0x4A2CB7: fstp    dword ptr [esi+28h]
0x4A2CBA: mov     byte ptr [esi+4], 2Fh ; '/'
0x4A2CBE: mov     [esi+20h], ebx
0x4A2CC1: mov     [esi+24h], ebx
0x4A2CC4: mov     eax, esi
0x4A2CC6: mov     ecx, [esp+20h+var_C]
0x4A2CCA: mov     large fs:0, ecx
0x4A2CD1: pop     ecx
0x4A2CD2: pop     esi
0x4A2CD3: pop     ebx
0x4A2CD4: add     esp, 14h
0x4A2CD7: retn
0x9B2650: mov     ecx, [ebp-14h]; this
0x9B2653: jmp     TESForm_destr
0x9B2658: mov     eax, [ebp-10h]
0x9B265B: push    eax
0x9B265C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B2661: pop     ecx
0x9B2662: retn
0x9B2663: mov     edx, [esp+arg_4]
0x9B2667: lea     eax, [edx-10h]
0x9B266A: mov     ecx, [edx-14h]
0x9B266D: xor     ecx, eax
0x9B266F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B2674: mov     eax, offset stru_ADE600
0x9B2679: jmp     ___CxxFrameHandler3
