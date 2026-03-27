0x4F8DB0: fldz
0x4F8DB2: push    ebx
0x4F8DB3: mov     ebx, [esp+4+arg_C]
0x4F8DB7: fstp    qword ptr [ebx]
0x4F8DB9: push    esi
0x4F8DBA: push    edi
0x4F8DBB: mov     edi, [esp+0Ch+arg_0]
0x4F8DBF: xor     esi, esi
0x4F8DC1: test    edi, edi
0x4F8DC3: jz      short loc_4F8DD7
0x4F8DC5: mov     eax, [edi]
0x4F8DC7: mov     edx, [eax+190h]
0x4F8DCD: mov     ecx, edi
0x4F8DCF: call    edx
0x4F8DD1: test    al, al
0x4F8DD3: jz      short loc_4F8DD7
0x4F8DD5: mov     esi, edi
0x4F8DD7: mov     ecx, [esi+58h]
0x4F8DDA: mov     eax, [ecx]
0x4F8DDC: mov     edx, [eax+2C0h]
0x4F8DE2: call    edx
0x4F8DE4: test    ax, 200h
0x4F8DE8: jz      short loc_4F8DEE
0x4F8DEA: fld1
0x4F8DEC: fstp    qword ptr [ebx]
0x4F8DEE: cmp     byte ptr ds:0B361ACh, 0
0x4F8DF5: jz      short loc_4F8E63
0x4F8DF7: fldz
0x4F8DF9: push    0; int
0x4F8DFB: fcomp   qword ptr [ebx]
0x4F8DFD: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x4F8E02: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F8E07: push    0; int
0x4F8E09: push    esi; void *
0x4F8E0A: fnstsw  ax
0x4F8E0C: test    ah, 44h
0x4F8E0F: jnp     short loc_4F8E3D
0x4F8E11: call    OblivionDynamicCast
0x4F8E16: add     esp, 14h
0x4F8E19: test    eax, eax
0x4F8E1B: jz      short loc_4F8E24
0x4F8E1D: mov     eax, [eax+4]
0x4F8E20: test    eax, eax
0x4F8E22: jnz     short loc_4F8E29
0x4F8E24: mov     eax, offset EmptyString
0x4F8E29: push    eax
0x4F8E2A: push    offset aSIsRunning; "%s is running"
0x4F8E2F: call    Interface_ConsolePrint
0x4F8E34: add     esp, 8
0x4F8E37: pop     edi
0x4F8E38: pop     esi
0x4F8E39: mov     al, 1
0x4F8E3B: pop     ebx
0x4F8E3C: retn
0x4F8E3D: call    OblivionDynamicCast
0x4F8E42: add     esp, 14h
0x4F8E45: test    eax, eax
0x4F8E47: jz      short loc_4F8E50
0x4F8E49: mov     eax, [eax+4]
0x4F8E4C: test    eax, eax
0x4F8E4E: jnz     short loc_4F8E55
0x4F8E50: mov     eax, offset EmptyString
0x4F8E55: push    eax
0x4F8E56: push    offset aSIsNotRunning; "%s is not running"
0x4F8E5B: call    Interface_ConsolePrint
0x4F8E60: add     esp, 8
0x4F8E63: pop     edi
0x4F8E64: pop     esi
0x4F8E65: mov     al, 1
0x4F8E67: pop     ebx
0x4F8E68: retn
