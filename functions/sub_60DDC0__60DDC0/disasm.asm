0x60DDC0: push    0FFFFFFFFh
0x60DDC2: push    offset SEH_6E3250
0x60DDC7: mov     eax, large fs:0
0x60DDCD: push    eax
0x60DDCE: push    esi
0x60DDCF: push    edi
0x60DDD0: mov     eax, ds:0B30AACh
0x60DDD5: xor     eax, esp
0x60DDD7: push    eax
0x60DDD8: lea     eax, [esp+18h+var_C]
0x60DDDC: mov     large fs:0, eax
0x60DDE2: mov     ecx, [esp+18h+arg_0]
0x60DDE6: test    ecx, ecx
0x60DDE8: jz      loc_60DE86
0x60DDEE: mov     eax, [ecx]
0x60DDF0: mov     edx, [eax+154h]
0x60DDF6: call    edx
0x60DDF8: test    eax, eax
0x60DDFA: jz      loc_60DE86
0x60DE00: mov     edx, [eax]
0x60DE02: mov     ecx, eax
0x60DE04: mov     eax, [edx+8]
0x60DE07: call    eax
0x60DE09: mov     edi, eax
0x60DE0B: test    edi, edi
0x60DE0D: jz      short loc_60DE86
0x60DE0F: push    offset unk_B3B808
0x60DE14: mov     ecx, edi
0x60DE16: call    sub_700010
0x60DE1B: test    eax, eax
0x60DE1D: jz      short loc_60DE3A
0x60DE1F: or      word ptr [eax+8], 8
0x60DE24: mov     byte ptr [eax+3Ch], 1
0x60DE28: mov     ecx, [esp+18h+var_C]
0x60DE2C: mov     large fs:0, ecx
0x60DE33: pop     ecx
0x60DE34: pop     edi
0x60DE35: pop     esi
0x60DE36: add     esp, 0Ch
0x60DE39: retn
0x60DE3A: push    40h ; '@'; Size
0x60DE3C: call    FormHeapAlloc
0x60DE41: mov     esi, eax
0x60DE43: add     esp, 4
0x60DE46: mov     [esp+18h+arg_0], esi
0x60DE4A: test    esi, esi
0x60DE4C: mov     [esp+18h+var_4], 0
0x60DE54: jz      short loc_60DE69
0x60DE56: mov     ecx, esi; this
0x60DE58: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x60DE5D: mov     dword ptr [esi], offset ??_7BSDoorHavokController@@6B@; const BSDoorHavokController::`vftable'
0x60DE63: mov     byte ptr [esi+3Ch], 0
0x60DE67: jmp     short loc_60DE6B
0x60DE69: xor     esi, esi
0x60DE6B: mov     edx, [esi]
0x60DE6D: mov     eax, [edx+58h]
0x60DE70: push    edi
0x60DE71: mov     ecx, esi
0x60DE73: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x60DE7B: call    eax
0x60DE7D: or      word ptr [esi+8], 8
0x60DE82: mov     byte ptr [esi+3Ch], 1
0x60DE86: mov     ecx, [esp+18h+var_C]
0x60DE8A: mov     large fs:0, ecx
0x60DE91: pop     ecx
0x60DE92: pop     edi
0x60DE93: pop     esi
0x60DE94: add     esp, 0Ch
0x60DE97: retn
