0x754E40: push    esi
0x754E41: push    40h ; '@'; Size
0x754E43: call    FormHeapAlloc
0x754E48: mov     esi, eax
0x754E4A: add     esp, 4
0x754E4D: test    esi, esi
0x754E4F: jz      short loc_754E6D
0x754E51: mov     ecx, esi; this
0x754E53: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
0x754E58: mov     dword ptr [esi], offset ??_7NiPSysResetOnLoopCtlr@@6B@; const NiPSysResetOnLoopCtlr::`vftable'
0x754E5E: fld     dword ptr ds:0A7DEB4h
0x754E64: fchs
0x754E66: mov     eax, esi
0x754E68: fstp    dword ptr [esi+3Ch]
0x754E6B: pop     esi
0x754E6C: retn
0x754E6D: xor     eax, eax
0x754E6F: pop     esi
0x754E70: retn
