0x6E8840: push    0FFFFFFFFh
0x6E8842: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x6E8847: mov     eax, large fs:0
0x6E884D: push    eax
0x6E884E: push    ecx
0x6E884F: push    esi
0x6E8850: push    edi
0x6E8851: mov     eax, ds:0B30AACh
0x6E8856: xor     eax, esp
0x6E8858: push    eax
0x6E8859: lea     eax, [esp+1Ch+var_C]
0x6E885D: mov     large fs:0, eax
0x6E8863: mov     esi, ecx
0x6E8865: mov     [esp+1Ch+var_10], esi
0x6E8869: mov     dword ptr [esi], offset ??_7NiBoolData@@6B@; const NiBoolData::`vftable'
0x6E886F: mov     eax, [esi+0Ch]
0x6E8872: test    eax, eax
0x6E8874: mov     [esp+1Ch+var_4], 0
0x6E887C: jz      short loc_6E889B
0x6E887E: mov     ecx, [eax-4]
0x6E8881: lea     edi, [eax-4]
0x6E8884: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6E8889: push    ecx; int
0x6E888A: push    8; unsigned int
0x6E888C: push    eax; void *
0x6E888D: call    $LN21
0x6E8892: push    edi
0x6E8893: call    FormHeapFree
0x6E8898: add     esp, 4
0x6E889B: mov     ecx, esi
0x6E889D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6E88A5: call    NiRefObject_destr
0x6E88AA: mov     ecx, [esp+1Ch+var_C]
0x6E88AE: mov     large fs:0, ecx
0x6E88B5: pop     ecx
0x6E88B6: pop     edi
0x6E88B7: pop     esi
0x6E88B8: add     esp, 10h
0x6E88BB: retn
