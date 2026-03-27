0x9E1250: push    offset aYouSuccessfull; "You successfully harvest %s."
0x9E1255: push    offset aSflorasuccessm; "sFloraSuccessMessage"
0x9E125A: mov     ecx, offset sFloraSuccessMessage
0x9E125F: call    GameSetting_ConstrAndReg
0x9E1264: push    offset sub_A1AE50; void (__cdecl *)()
0x9E1269: call    _atexit
0x9E126E: pop     ecx
0x9E126F: retn
