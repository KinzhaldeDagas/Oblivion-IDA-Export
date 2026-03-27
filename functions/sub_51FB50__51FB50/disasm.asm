0x51FB50: push    0FFFFFFFFh
0x51FB52: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x51FB57: mov     eax, large fs:0
0x51FB5D: push    eax
0x51FB5E: push    ecx
0x51FB5F: push    ebx
0x51FB60: push    ebp
0x51FB61: push    esi
0x51FB62: push    edi
0x51FB63: mov     eax, ds:0B30AACh
0x51FB68: xor     eax, esp
0x51FB6A: push    eax
0x51FB6B: lea     eax, [esp+24h+var_C]
0x51FB6F: mov     large fs:0, eax
0x51FB75: mov     esi, ecx
0x51FB77: mov     ebx, [esp+24h+a2]
0x51FB7B: push    0; int
0x51FB7D: push    offset ??_R0?AVTESFaction@@@8; struct TypeDescriptor *
0x51FB82: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51FB87: push    0; int
0x51FB89: push    ebx; void *
0x51FB8A: call    OblivionDynamicCast
0x51FB8F: mov     edi, eax
0x51FB91: add     esp, 14h
0x51FB94: test    edi, edi
0x51FB96: jz      loc_51FC9B
0x51FB9C: push    ebx; a2
0x51FB9D: mov     ecx, esi; this
0x51FB9F: call    TESForm_CopyAllComponentsFrom
0x51FBA4: mov     al, [edi+34h]
0x51FBA7: mov     [esi+34h], al
0x51FBAA: fld     dword ptr [edi+38h]
0x51FBAD: fstp    [esp+24h+a2]
0x51FBB1: mov     ecx, esi
0x51FBB3: fld     [esp+24h+a2]
0x51FBB7: fstp    dword ptr [esi+38h]
0x51FBBA: call    sub_51FB00
0x51FBBF: add     edi, 3Ch ; '<'
0x51FBC2: lea     ebx, [esi+3Ch]
0x51FBC5: mov     [esp+24h+a2], ebx
0x51FBC9: jz      loc_51FC9B
0x51FBCF: jmp     short loc_51FBD5
0x51FBD1: mov     ebx, [esp+24h+a2]
0x51FBD5: cmp     dword ptr [edi+4], 0
0x51FBD9: jnz     short loc_51FBE4
0x51FBDB: cmp     dword ptr [edi], 0
0x51FBDE: jz      loc_51FC9B
0x51FBE4: push    1Ch; Size
0x51FBE6: call    FormHeapAlloc
0x51FBEB: add     esp, 4
0x51FBEE: mov     [esp+24h+var_10], eax
0x51FBF2: test    eax, eax
0x51FBF4: mov     [esp+24h+var_4], 0
0x51FBFC: jz      short loc_51FC09
0x51FBFE: mov     ecx, eax
0x51FC00: call    sub_51F570
0x51FC05: mov     esi, eax
0x51FC07: jmp     short loc_51FC0B
0x51FC09: xor     esi, esi
0x51FC0B: mov     ecx, [edi]
0x51FC0D: mov     edx, [ecx]
0x51FC0F: push    0; a3
0x51FC11: push    edx; a2
0x51FC12: mov     ecx, esi; this
0x51FC14: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x51FC1C: call    BSStringT_Set
0x51FC21: mov     eax, [edi]
0x51FC23: mov     ecx, [eax+8]
0x51FC26: push    0; a3
0x51FC28: push    ecx; a2
0x51FC29: lea     ecx, [esi+8]; this
0x51FC2C: call    BSStringT_Set
0x51FC31: mov     eax, [edi]
0x51FC33: mov     edx, [esi+10h]
0x51FC36: mov     edx, [edx+8]
0x51FC39: lea     ecx, [esi+10h]
0x51FC3C: add     eax, 10h
0x51FC3F: push    eax
0x51FC40: call    edx
0x51FC42: cmp     dword ptr [ebx+4], 0
0x51FC46: lea     ebp, [ebx+4]
0x51FC49: jz      short loc_51FC5B
0x51FC4B: mov     eax, ebp
0x51FC4D: lea     ecx, [ecx+0]
0x51FC50: mov     ebx, [eax]
0x51FC52: cmp     dword ptr [ebx+4], 0
0x51FC56: lea     eax, [ebx+4]
0x51FC59: jnz     short loc_51FC50
0x51FC5B: cmp     dword ptr [ebx], 0
0x51FC5E: jz      short loc_51FC83
0x51FC60: push    8; Size
0x51FC62: call    FormHeapAlloc
0x51FC67: add     esp, 4
0x51FC6A: test    eax, eax
0x51FC6C: jz      short loc_51FC7C
0x51FC6E: mov     [eax], esi
0x51FC70: mov     dword ptr [eax+4], 0
0x51FC77: mov     [ebx+4], eax
0x51FC7A: jmp     short loc_51FC85
0x51FC7C: xor     eax, eax
0x51FC7E: mov     [ebx+4], eax
0x51FC81: jmp     short loc_51FC85
0x51FC83: mov     [ebx], esi
0x51FC85: mov     ebp, [ebp+0]
0x51FC88: test    ebp, ebp
0x51FC8A: jz      short loc_51FC90
0x51FC8C: mov     [esp+24h+a2], ebp
0x51FC90: mov     edi, [edi+4]
0x51FC93: test    edi, edi
0x51FC95: jnz     loc_51FBD1
0x51FC9B: mov     ecx, dword ptr [esp+24h+var_C]
0x51FC9F: mov     large fs:0, ecx
0x51FCA6: pop     ecx
0x51FCA7: pop     edi
0x51FCA8: pop     esi
0x51FCA9: pop     ebp
0x51FCAA: pop     ebx
0x51FCAB: add     esp, 10h
0x51FCAE: retn    4
