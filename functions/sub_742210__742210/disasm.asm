0x742210: push    0FFFFFFFFh
0x742212: push    offset SEH_8C62B0
0x742217: mov     eax, large fs:0
0x74221D: push    eax
0x74221E: push    ecx
0x74221F: push    esi
0x742220: mov     eax, ds:0B30AACh
0x742225: xor     eax, esp
0x742227: push    eax
0x742228: lea     eax, [esp+18h+var_C]
0x74222C: mov     large fs:0, eax
0x742232: push    108h; Size
0x742237: call    FormHeapAlloc
0x74223C: mov     esi, eax
0x74223E: add     esp, 4
0x742241: mov     [esp+18h+var_10], esi
0x742245: xor     eax, eax
0x742247: cmp     esi, eax
0x742249: mov     [esp+18h+var_4], eax
0x74224D: jz      short loc_74225E
0x74224F: mov     ecx, esi; this
0x742251: call    ??0NiLight@@QAE@XZ; NiLight::NiLight(void)
0x742256: mov     dword ptr [esi], offset ??_7NiAmbientLight@@6B@; const NiAmbientLight::`vftable'
0x74225C: mov     eax, esi
0x74225E: mov     ecx, [esp+18h+var_C]
0x742262: mov     large fs:0, ecx
0x742269: pop     ecx
0x74226A: pop     esi
0x74226B: add     esp, 10h
0x74226E: retn
