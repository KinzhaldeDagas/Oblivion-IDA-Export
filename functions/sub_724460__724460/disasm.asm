0x724460: push    esi
0x724461: mov     esi, ecx
0x724463: test    byte ptr [esi+0DCh], 1
0x72446A: jz      short loc_7244AA
0x72446C: cmp     dword ptr [esi+0E0h], 0
0x724473: jl      short loc_7244B7
0x724475: fld     [esp+4+arg_0]
0x724479: push    1; updateProperties
0x72447B: push    ecx
0x72447C: fstp    [esp+0Ch+applicationTime]; applicationTime
0x72447F: call    NiAVObject_UpdatePropertiesAndControllers; Update one NiAVObject's property controllers and attached NiTimeController chain. If requested, walk the property list at NiAVObject+0x9C and invoke property virtual +0x50 when its controller pointer is non-null. Always walk NiObjectNET.controller at object+0x0C through NiTimeController.next at +0x34 and invoke controller virtual Update +0x54 with applicationTime. No Active-bit prefilter occurs here: NiTimeController.flags+0x08 bit 3 only affects time-cache logic inside the controller. External Crossbow consequence after this Oblivion decode: temporarily clearing the base Active bit inside an already-entered morph hook will not by itself stop the next scene traversal, but pointer discovery still cannot make a graph that is not traversed dispatch Update.
0x724484: mov     eax, [esi+0E0h]
0x72448A: mov     ecx, [esi+0B0h]
0x724490: mov     ecx, [ecx+eax*4]
0x724493: test    ecx, ecx
0x724495: jz      short loc_7244B7
0x724497: mov     edx, [ecx]
0x724499: fld     [esp+4+arg_0]
0x72449D: mov     eax, [edx+4Ch]
0x7244A0: push    ecx
0x7244A1: fstp    [esp+8+var_8]
0x7244A4: call    eax
0x7244A6: pop     esi
0x7244A7: retn    4
0x7244AA: fld     [esp+4+arg_0]
0x7244AE: push    ecx
0x7244AF: fstp    [esp+8+var_8]; float
0x7244B2: call    sub_70A310
0x7244B7: pop     esi
0x7244B8: retn    4
