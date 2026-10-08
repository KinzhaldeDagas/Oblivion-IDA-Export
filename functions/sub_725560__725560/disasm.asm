0x725560: push    0FFFFFFFFh
0x725562: push    offset SEH_8C8970
0x725567: mov     eax, large fs:0
0x72556D: push    eax
0x72556E: push    ecx
0x72556F: push    esi
0x725570: push    edi
0x725571: mov     eax, ds:0B30AACh
0x725576: xor     eax, esp
0x725578: push    eax
0x725579: lea     eax, [esp+1Ch+var_C]
0x72557D: mov     large fs:0, eax
0x725583: mov     edi, ecx
0x725585: push    114h; Size
0x72558A: call    FormHeapAlloc
0x72558F: mov     esi, eax
0x725591: add     esp, 4
0x725594: mov     [esp+1Ch+var_10], esi
0x725598: test    esi, esi
0x72559A: mov     [esp+1Ch+var_4], 0
0x7255A2: jz      short loc_7255C9
0x7255A4: mov     ecx, esi; this
0x7255A6: call    ??0NiLight@@QAE@XZ; NiLight::NiLight(void)
0x7255AB: fldz
0x7255AD: fst     dword ptr [esi+108h]
0x7255B3: mov     dword ptr [esi], offset ??_7NiPointLight@@6B@; const NiPointLight::`vftable'
0x7255B9: fld1
0x7255BB: fstp    dword ptr [esi+10Ch]
0x7255C1: fstp    dword ptr [esi+110h]
0x7255C7: jmp     short loc_7255CB
0x7255C9: xor     esi, esi
0x7255CB: mov     eax, [esp+1Ch+arg_0]
0x7255CF: push    eax
0x7255D0: push    esi
0x7255D1: mov     ecx, edi
0x7255D3: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7255DB: call    sub_71A5A0
0x7255E0: fld     dword ptr [edi+108h]
0x7255E6: fstp    dword ptr [esi+108h]
0x7255EC: mov     eax, esi
0x7255EE: fld     dword ptr [edi+10Ch]
0x7255F4: fstp    dword ptr [esi+10Ch]
0x7255FA: fld     dword ptr [edi+110h]
0x725600: fstp    dword ptr [esi+110h]
0x725606: mov     ecx, [esp+1Ch+var_C]
0x72560A: mov     large fs:0, ecx
0x725611: pop     ecx
0x725612: pop     edi
0x725613: pop     esi
0x725614: add     esp, 10h
0x725617: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
