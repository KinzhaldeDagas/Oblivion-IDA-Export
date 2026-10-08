0x4B0C30: fld1; Initialize TESObjectLIGH runtime data. The 0x18-byte DATA payload is object +0x70..+0x87: +0x80 is the falloff exponent and +0x84 is projector FOV. The constructor clears the exponent and sets FOV to 90.0; record load normalizes a zero exponent to 1.0.
0x4B0C32: xor     eax, eax
0x4B0C34: mov     [ecx+8Ch], eax
0x4B0C3A: mov     [ecx+70h], eax
0x4B0C3D: mov     [ecx+74h], eax
0x4B0C40: mov     [ecx+78h], eax
0x4B0C43: mov     [ecx+7Ch], eax
0x4B0C46: mov     [ecx+80h], eax
0x4B0C4C: fstp    dword ptr [ecx+88h]; Initialize TESObjectLIGH::fade_88 to 1.0; this field is serialized separately as FNAM.
0x4B0C52: fld     dword ptr ds:0A430CCh
0x4B0C58: fstp    dword ptr [ecx+84h]
0x4B0C5E: jmp     j_TESForm_InitializeComponents
