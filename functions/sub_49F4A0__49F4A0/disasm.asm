0x49F4A0: mov     eax, [ecx+44h]; Samples a BSAnimGroupSequence only while native controller state +0x44 is 1, 2, or 3. Passes sequence +0x48 plus ActorAnimData scheduler time +0x94 to NiControllerSequence_AdvanceTime with commit enabled.
0x49F4A3: add     eax, 0FFFFFFFFh
0x49F4A6: cmp     eax, 2
0x49F4A9: ja      short loc_49F4C8
0x49F4AB: fld     dword ptr [ecx+48h]
0x49F4AE: push    1; char
0x49F4B0: fadd    [esp+4+arg_0]
0x49F4B4: push    ecx
0x49F4B5: fstp    [esp+8+arg_0]
0x49F4B9: fld     [esp+8+arg_0]
0x49F4BD: fstp    [esp+8+var_8]; float
0x49F4C0: call    NiControllerSequence_AdvanceTime; NiControllerSequence time advance. Computes scaled time from input, last input +0x34, accumulated/scaled time +0x38, and frequency +0x28; wraps cycle type 0 or clamps other cycle types to start/end +0x2C/+0x30. When commit is true, stores +0x34, +0x38, and resulting local time +0x3C; otherwise returns the computed local time without mutation.
0x49F4C5: retn    4
0x49F4C8: fldz
0x49F4CA: retn    4
