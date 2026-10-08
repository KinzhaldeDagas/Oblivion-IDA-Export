0x7338B0: push    0FFFFFFFFh
0x7338B2: push    offset ??1NiNIFImageReader@@UAE@XZ_SEH
0x7338B7: mov     eax, large fs:0
0x7338BD: push    eax
0x7338BE: push    ecx
0x7338BF: push    esi
0x7338C0: mov     eax, ds:0B30AACh
0x7338C5: xor     eax, esp
0x7338C7: push    eax
0x7338C8: lea     eax, [esp+18h+var_C]
0x7338CC: mov     large fs:0, eax
0x7338D2: mov     esi, ecx
0x7338D4: mov     [esp+18h+var_10], esi
0x7338D8: mov     dword ptr [esi], offset ??_7NiNIFImageReader@@6B@; const NiNIFImageReader::`vftable'
0x7338DE: lea     ecx, [esi+100h]; this
0x7338E4: mov     [esp+18h+var_4], 0
0x7338EC: call    ??1NiStream@@UAE@XZ; NiStream::~NiStream(void)
0x7338F1: mov     dword ptr [esi], offset ??_7NiImageReader@@6B@; const NiImageReader::`vftable'
0x7338F7: add     esi, 80h ; '€'
0x7338FD: push    esi; lpCriticalSection
0x7338FE: call    dword ptr ds:0A28068h
0x733904: mov     ecx, [esp+18h+var_C]
0x733908: mov     large fs:0, ecx
0x73390F: pop     ecx
0x733910: pop     esi
0x733911: add     esp, 10h
0x733914: retn
0x733860: mov     dword ptr [ecx], offset ??_7NiImageReader@@6B@; const NiImageReader::`vftable'
0x733866: add     ecx, 80h ; '€'
0x73386C: push    ecx; lpCriticalSection
0x73386D: call    dword ptr ds:0A28068h
0x733873: retn
0x9CA980: mov     ecx, [ebp-10h]
0x9CA983: jmp     loc_733860
0x9CA988: mov     edx, [esp+arg_4]
0x9CA98C: lea     eax, [edx-8]
0x9CA98F: mov     ecx, [edx-0Ch]
0x9CA992: xor     ecx, eax
0x9CA994: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA999: mov     eax, offset stru_AF300C
0x9CA99E: jmp     ___CxxFrameHandler3
