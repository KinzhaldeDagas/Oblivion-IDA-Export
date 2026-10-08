struct ExteriorCellReferenceNode
{
ExteriorCellReferenceData *data; ///< Verified: overflow node stores prior 12-byte record pointer at +0 and next node at +4 from 453068..45307A.
ExteriorCellReferenceNode *next;
};
