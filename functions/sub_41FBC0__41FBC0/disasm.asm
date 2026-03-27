0x41FBC0: push    0FFFFFFFFh
0x41FBC2: push    offset SEH_8C8970
0x41FBC7: mov     eax, large fs:0
0x41FBCD: push    eax
0x41FBCE: push    ecx
0x41FBCF: push    esi
0x41FBD0: push    edi
0x41FBD1: mov     eax, ___security_cookie
0x41FBD6: xor     eax, esp
0x41FBD8: push    eax
0x41FBD9: lea     eax, [esp+1Ch+var_C]
0x41FBDD: mov     large fs:0, eax
0x41FBE3: mov     edi, ecx
0x41FBE5: push    20h ; ' '; a2
0x41FBE7: call    BaseExtraList_GetExtraData
0x41FBEC: mov     esi, eax
0x41FBEE: test    esi, esi
0x41FBF0: jz      short loc_41FC1D
0x41FBF2: mov     ecx, [esi+0Ch]
0x41FBF5: test    ecx, ecx
0x41FBF7: jz      short loc_41FC02
0x41FBF9: mov     eax, [ecx]
0x41FBFB: mov     edx, [eax+10h]
0x41FBFE: push    1
0x41FC00: call    edx
0x41FC02: mov     eax, [esp+1Ch+arg_0]
0x41FC06: mov     [esi+0Ch], eax
0x41FC09: mov     ecx, [esp+1Ch+var_C]
0x41FC0D: mov     large fs:0, ecx
0x41FC14: pop     ecx
0x41FC15: pop     edi
0x41FC16: pop     esi
0x41FC17: add     esp, 10h
0x41FC1A: retn    4
0x41FC1D: push    10h; Size
0x41FC1F: call    FormHeapAlloc
0x41FC24: add     esp, 4
0x41FC27: mov     [esp+1Ch+var_10], eax
0x41FC2B: test    eax, eax
0x41FC2D: mov     [esp+1Ch+var_4], 0
0x41FC35: jz      short loc_41FC45
0x41FC37: mov     ecx, [esp+1Ch+arg_0]
0x41FC3B: push    ecx
0x41FC3C: mov     ecx, eax; this
0x41FC3E: call    ??0ExtraTresPassPackage@@QAE@XZ; ExtraTresPassPackage::ExtraTresPassPackage(void)
0x41FC43: jmp     short loc_41FC47
0x41FC45: xor     eax, eax
0x41FC47: push    eax; BSExtraData *
0x41FC48: mov     ecx, edi; ExtraDataList *
0x41FC4A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x41FC52: call    BaseExtraList_AddExtra
0x41FC57: mov     ecx, [esp+1Ch+var_C]
0x41FC5B: mov     large fs:0, ecx
0x41FC62: pop     ecx
0x41FC63: pop     edi
0x41FC64: pop     esi
0x41FC65: add     esp, 10h
0x41FC68: retn    4
