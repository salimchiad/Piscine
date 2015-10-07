#!/bin/bash


var=$(ldapwhoami -Q)

echo ${var:3}

