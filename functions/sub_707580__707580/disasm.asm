0x707580: cmp     [esp+arg_4], 0
0x707585: push    esi
0x707586: mov     esi, ecx
0x707588: jz      short loc_707599
0x70758A: fld     [esp+4+arg_0]
0x70758E: push    1; updateProperties
0x707590: push    ecx
0x707591: fstp    [esp+0Ch+applicationTime]; applicationTime
0x707594: call    NiAVObject_UpdatePropertiesAndControllers; Update one NiAVObject's property controllers and attached NiTimeController chain. If requested, walk the property list at NiAVObject+0x9C and invoke property virtual +0x50 when its controller pointer is non-null. Always walk NiObjectNET.controller at object+0x0C through NiTimeController.next at +0x34 and invoke controller virtual Update +0x54 with applicationTime. No Active-bit prefilter occurs here: NiTimeController.flags+0x08 bit 3 only affects time-cache logic inside the controller. External Crossbow consequence after this Oblivion decode: temporarily clearing the base Active bit inside an already-entered morph hook will not by itself stop the next scene traversal, but pointer discovery still cannot make a graph that is not traversed dispatch Update.
0x707599: mov     eax, [esi]
0x70759B: mov     edx, [eax+74h]
0x70759E: mov     ecx, esi
0x7075A0: call    edx
0x7075A2: mov     eax, [esi]
0x7075A4: mov     edx, [eax+78h]
0x7075A7: mov     ecx, esi
0x7075A9: call    edx
0x7075AB: pop     esi
0x7075AC: retn    8
