0x709710: push    0FFFFFFFFh
0x709712: push    offset SEH_8C8900
0x709717: mov     eax, large fs:0
0x70971D: push    eax
0x70971E: push    ecx
0x70971F: mov     eax, ds:0B30AACh
0x709724: xor     eax, esp
0x709726: push    eax
0x709727: lea     eax, [esp+14h+var_C]
0x70972B: mov     large fs:0, eax
0x709731: push    5Ch ; '\'; Size
0x709733: call    FormHeapAlloc
0x709738: add     esp, 4
0x70973B: mov     [esp+14h+var_10], eax
0x70973F: test    eax, eax
0x709741: mov     [esp+14h+var_4], 0
0x709749: jz      short loc_709762
0x70974B: mov     ecx, eax; this
0x70974D: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x709752: mov     ecx, [esp+14h+var_C]
0x709756: mov     large fs:0, ecx
0x70975D: pop     ecx
0x70975E: add     esp, 10h
0x709761: retn
0x709762: xor     eax, eax
0x709764: mov     ecx, [esp+14h+var_C]
0x709768: mov     large fs:0, ecx
0x70976F: pop     ecx
0x709770: add     esp, 10h
0x709773: retn
