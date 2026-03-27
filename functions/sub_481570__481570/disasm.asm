0x481570: push    0FFFFFFFFh
0x481572: push    offset SEH_6E3250
0x481577: mov     eax, large fs:0
0x48157D: push    eax
0x48157E: push    esi
0x48157F: push    edi
0x481580: mov     eax, ds:0B30AACh
0x481585: xor     eax, esp
0x481587: push    eax
0x481588: lea     eax, [esp+18h+var_C]
0x48158C: mov     large fs:0, eax
0x481592: mov     esi, [esp+18h+arg_0]
0x481596: test    esi, esi
0x481598: jz      loc_48164A
0x48159E: mov     eax, [esi]
0x4815A0: mov     edx, [eax+0Ch]
0x4815A3: mov     ecx, esi
0x4815A5: call    edx
0x4815A7: test    eax, eax
0x4815A9: mov     ecx, esi
0x4815AB: jz      short loc_481608
0x4815AD: push    0
0x4815AF: call    NiNode_GetNiPropertyByID
0x4815B4: test    eax, eax
0x4815B6: jnz     loc_48164A
0x4815BC: push    1Ch; Size
0x4815BE: call    FormHeapAlloc
0x4815C3: add     esp, 4
0x4815C6: mov     [esp+18h+arg_0], eax
0x4815CA: test    eax, eax
0x4815CC: mov     [esp+18h+var_4], 0
0x4815D4: jz      short loc_4815DF
0x4815D6: mov     ecx, eax
0x4815D8: call    sub_47F920
0x4815DD: jmp     short loc_4815E1
0x4815DF: xor     eax, eax
0x4815E1: or      word ptr [eax+18h], 1
0x4815E6: push    eax; a2
0x4815E7: mov     ecx, esi; this
0x4815E9: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4815F1: call    sub_405680
0x4815F6: mov     ecx, [esp+18h+var_C]
0x4815FA: mov     large fs:0, ecx
0x481601: pop     ecx
0x481602: pop     edi
0x481603: pop     esi
0x481604: add     esp, 0Ch
0x481607: retn
0x481608: mov     eax, [esi]
0x48160A: mov     edx, [eax+8]
0x48160D: call    edx
0x48160F: mov     edi, eax
0x481611: test    edi, edi
0x481613: jz      short loc_48164A
0x481615: movzx   eax, word ptr [edi+0B6h]
0x48161C: xor     esi, esi
0x48161E: test    eax, eax
0x481620: jbe     short loc_48164A
0x481622: cmp     eax, esi
0x481624: ja      short loc_48162A
0x481626: xor     eax, eax
0x481628: jmp     short loc_481633
0x48162A: mov     eax, [edi+0B0h]
0x481630: mov     eax, [eax+esi*4]
0x481633: push    eax
0x481634: call    sub_481570
0x481639: movzx   eax, word ptr [edi+0B6h]
0x481640: add     esi, 1
0x481643: add     esp, 4
0x481646: cmp     eax, esi
0x481648: ja      short loc_48162A
0x48164A: mov     ecx, [esp+18h+var_C]
0x48164E: mov     large fs:0, ecx
0x481655: pop     ecx
0x481656: pop     edi
0x481657: pop     esi
0x481658: add     esp, 0Ch
0x48165B: retn
