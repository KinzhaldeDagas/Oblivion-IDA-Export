0x8B0210: push    0FFFFFFFFh
0x8B0212: push    offset ??1bhkShapeCollection@@UAE@XZ_SEH
0x8B0217: mov     eax, large fs:0
0x8B021D: push    eax
0x8B021E: push    ecx
0x8B021F: push    esi
0x8B0220: mov     eax, ds:0B30AACh
0x8B0225: xor     eax, esp
0x8B0227: push    eax
0x8B0228: lea     eax, [esp+18h+var_C]
0x8B022C: mov     large fs:0, eax
0x8B0232: mov     esi, ecx
0x8B0234: mov     [esp+18h+var_10], esi
0x8B0238: mov     dword ptr [esi], offset ??_7bhkBvTreeShape@@6B@; const bhkBvTreeShape::`vftable'
0x8B023E: mov     [esp+18h+var_4], 0
0x8B0246: call    sub_89D700
0x8B024B: sub     dword ptr ds:0BA7F98h, 1
0x8B0252: mov     ecx, esi; this
0x8B0254: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8B025C: call    ??1bhkShape@@UAE@XZ; bhkShape::~bhkShape(void)
0x8B0261: mov     ecx, [esp+18h+var_C]
0x8B0265: mov     large fs:0, ecx
0x8B026C: pop     ecx
0x8B026D: pop     esi
0x8B026E: add     esp, 10h
0x8B0271: retn
