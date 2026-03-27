0x706530: push    0FFFFFFFFh
0x706532: push    offset SEH_8C62B0
0x706537: mov     eax, large fs:0
0x70653D: push    eax
0x70653E: push    ecx
0x70653F: push    esi
0x706540: mov     eax, ds:0B30AACh
0x706545: xor     eax, esp
0x706547: push    eax
0x706548: lea     eax, [esp+18h+var_C]
0x70654C: mov     large fs:0, eax
0x706552: push    1Ch; Size
0x706554: call    FormHeapAlloc
0x706559: mov     esi, eax
0x70655B: add     esp, 4
0x70655E: mov     [esp+18h+var_10], esi
0x706562: xor     eax, eax
0x706564: cmp     esi, eax
0x706566: mov     [esp+18h+var_4], eax
0x70656A: jz      short loc_706581
0x70656C: mov     ecx, esi; this
0x70656E: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x706573: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x706579: mov     word ptr [esi+18h], 8
0x70657F: mov     eax, esi
0x706581: mov     ecx, [esp+18h+var_C]
0x706585: mov     large fs:0, ecx
0x70658C: pop     ecx
0x70658D: pop     esi
0x70658E: add     esp, 10h
0x706591: retn
