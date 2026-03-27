0x45BDE0: sub     esp, 8
0x45BDE3: push    ebx
0x45BDE4: push    ebp
0x45BDE5: push    esi
0x45BDE6: push    edi; int
0x45BDE7: mov     edi, [esp+18h+arg_0]
0x45BDEB: xor     esi, esi
0x45BDED: lea     eax, [edi+10h]
0x45BDF0: test    eax, eax
0x45BDF2: mov     ebp, ecx
0x45BDF4: mov     [esp+18h+var_4], ebp
0x45BDF8: mov     [esp+18h+var_8], esi
0x45BDFC: jz      short loc_45BE13
0x45BDFE: mov     edi, edi
0x45BE00: cmp     dword ptr [eax], 0
0x45BE03: jz      short loc_45BE08
0x45BE05: add     esi, 1
0x45BE08: mov     eax, [eax+4]
0x45BE0B: test    eax, eax
0x45BE0D: jnz     short loc_45BE00
0x45BE0F: mov     [esp+18h+var_8], esi
0x45BE13: push    0; int
0x45BE15: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x45BE1A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45BE1F: push    0; int
0x45BE21: push    edi; void *
0x45BE22: call    OblivionDynamicCast
0x45BE27: mov     ebx, eax
0x45BE29: add     esp, 14h
0x45BE2C: test    ebx, ebx
0x45BE2E: jz      short loc_45BE51
0x45BE30: test    esi, esi
0x45BE32: jz      short loc_45BE51
0x45BE34: test    [esp+18h+arg_8], 0Ch
0x45BE39: mov     ecx, ebp
0x45BE3B: setnz   al
0x45BE3E: push    eax
0x45BE3F: push    ebx
0x45BE40: call    sub_45BB30
0x45BE45: test    al, al
0x45BE47: jz      short loc_45BE51
0x45BE49: and     [esp+18h+arg_4], 7FFFFFF3h
0x45BE51: push    0; int
0x45BE53: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x45BE58: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45BE5D: push    0; int
0x45BE5F: push    edi; void *
0x45BE60: call    OblivionDynamicCast
0x45BE65: mov     esi, eax
0x45BE67: add     esp, 14h
0x45BE6A: test    esi, esi
0x45BE6C: jz      short loc_45BE7C
0x45BE6E: mov     ecx, esi; int
0x45BE70: call    sub_5EAE70
0x45BE75: mov     ecx, esi
0x45BE77: call    sub_5E9690
0x45BE7C: test    ebx, ebx
0x45BE7E: jz      short loc_45BEBA
0x45BE80: mov     edx, [ebx+18h]
0x45BE83: mov     eax, [edx]
0x45BE85: lea     ecx, [ebx+18h]
0x45BE88: call    eax
0x45BE8A: test    eax, eax
0x45BE8C: jnz     short loc_45BEBA
0x45BE8E: mov     edx, [ebx]
0x45BE90: mov     eax, [edx+0D4h]
0x45BE96: mov     esi, [ebx+0Ch]
0x45BE99: mov     ecx, ebx
0x45BE9B: call    eax
0x45BE9D: push    eax
0x45BE9E: push    esi; ArgList
0x45BE9F: push    offset aTryingToResetO; "Trying to reset object %08X %s, but the"...
0x45BEA4: call    PrintError
0x45BEA9: mov     eax, [esp+24h+var_8]
0x45BEAD: add     esp, 0Ch
0x45BEB0: pop     edi
0x45BEB1: pop     esi
0x45BEB2: pop     ebp
0x45BEB3: pop     ebx
0x45BEB4: add     esp, 8
0x45BEB7: retn    0Ch
0x45BEBA: cmp     [esp+18h+arg_4], 0
0x45BEBF: jz      loc_45C010
0x45BEC5: cmp     [esp+18h+var_8], 0
0x45BECA: jz      loc_45C010
0x45BED0: cmp     byte ptr [ebp+0A8h], 0
0x45BED7: movzx   esi, byte ptr [edi+4]
0x45BEDB: jz      short loc_45BEFA
0x45BEDD: test    ebx, ebx
0x45BEDF: jz      short loc_45BEEC
0x45BEE1: mov     ecx, ebx; this
0x45BEE3: call    TESObjectREFR_IsPersistent?
0x45BEE8: test    al, al
0x45BEEA: jz      short loc_45BEFA
0x45BEEC: cmp     esi, 28h ; '('
0x45BEEF: jz      short loc_45BEFA
0x45BEF1: cmp     esi, 19h
0x45BEF4: jnz     loc_45C010
0x45BEFA: push    0; int
0x45BEFC: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x45BF01: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45BF06: push    0; int
0x45BF08: push    edi; void *
0x45BF09: call    OblivionDynamicCast
0x45BF0E: mov     esi, eax
0x45BF10: add     esp, 14h
0x45BF13: test    esi, esi
0x45BF15: jz      short loc_45BF3A
0x45BF17: mov     edx, [esi]
0x45BF19: mov     eax, [edx+380h]
0x45BF1F: mov     ecx, esi
0x45BF21: call    eax
0x45BF23: test    eax, eax
0x45BF25: jz      short loc_45BF3A
0x45BF27: cmp     dword ptr [esi+3Ch], 0
0x45BF2B: jz      short loc_45BF3A
0x45BF2D: cmp     dword ptr [eax+3Ch], 0
0x45BF31: jz      short loc_45BF3A
0x45BF33: mov     ecx, esi
0x45BF35: call    sub_5F0410
0x45BF3A: push    0FFFFFFFFh; a2
0x45BF3C: mov     ecx, edi; this
0x45BF3E: call    TESForm_GetOverrideFile
0x45BF43: test    eax, eax
0x45BF45: jz      loc_45BFFE
0x45BF4B: mov     ecx, eax
0x45BF4D: call    sub_4520F0
0x45BF52: mov     ebp, eax
0x45BF54: test    ebp, ebp
0x45BF56: jz      loc_45BFFE
0x45BF5C: push    edi
0x45BF5D: mov     ecx, ebp
0x45BF5F: call    TESFile__FindForm
0x45BF64: test    al, al
0x45BF66: jz      loc_45BFFE
0x45BF6C: mov     dword ptr ds:0B33A9Ch, 0
0x45BF76: movzx   eax, byte ptr [edi+4]
0x45BF7A: add     eax, 0FFFFFFCFh
0x45BF7D: cmp     eax, 2
0x45BF80: ja      short loc_45BFA9
0x45BF82: test    ebx, ebx
0x45BF84: jz      short loc_45BFA9
0x45BF86: test    esi, esi
0x45BF88: jz      short loc_45BF9A
0x45BF8A: mov     ecx, esi
0x45BF8C: call    sub_5E1F60
0x45BF91: test    eax, eax
0x45BF93: mov     ds:0B33A9Ch, eax
0x45BF98: jnz     short loc_45BFA9
0x45BF9A: mov     edx, [ebx+18h]
0x45BF9D: mov     eax, [edx]
0x45BF9F: lea     ecx, [ebx+18h]
0x45BFA2: call    eax
0x45BFA4: mov     ds:0B33A9Ch, eax
0x45BFA9: mov     ecx, ds:0BA9DE4h
0x45BFAF: mov     edx, large fs:2Ch
0x45BFB6: mov     esi, [edx+ecx*4]
0x45BFB9: mov     bl, [esi+184h]
0x45BFBF: mov     edi, [esp+18h+var_4]
0x45BFC3: mov     byte ptr [esi+184h], 1
0x45BFCA: or      dword ptr [edi+18h], 4
0x45BFCE: mov     ecx, ds:0B33A98h
0x45BFD4: push    0
0x45BFD6: push    ebp
0x45BFD7: call    TESDataHandler_LoadFormRecord
0x45BFDC: and     dword ptr [edi+18h], 0FFFFFFFBh
0x45BFE0: mov     eax, [esp+18h+var_8]
0x45BFE4: pop     edi
0x45BFE5: mov     [esi+184h], bl
0x45BFEB: pop     esi
0x45BFEC: pop     ebp
0x45BFED: mov     dword ptr ds:0B33A9Ch, 0
0x45BFF7: pop     ebx
0x45BFF8: add     esp, 8
0x45BFFB: retn    0Ch
0x45BFFE: mov     ecx, ds:0B34D90h
0x45C004: mov     eax, [ecx]
0x45C006: mov     edx, [eax+18h]
0x45C009: push    offset aFormCouldNotBe; "Form could not be found in file during "...
0x45C00E: call    edx
0x45C010: mov     eax, [esp+18h+var_8]
0x45C014: pop     edi
0x45C015: pop     esi
0x45C016: pop     ebp
0x45C017: pop     ebx
0x45C018: add     esp, 8
0x45C01B: retn    0Ch
